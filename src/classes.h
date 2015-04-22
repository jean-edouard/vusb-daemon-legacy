/*
 * Copyright (c) 2015 Jed Lejosne <lejosnej@ainfosec.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


/* Copied from https://github.com/jean-edouard/binterface-parser */

typedef struct {
  unsigned char id;
  char *value;
} protocol_t;

typedef struct {
  unsigned char id;
  char *value;
  protocol_t *prots;
} subclass_t;

typedef struct {
  unsigned char id;
  char *value;
  subclass_t *subs;
} class_t;


/* Generated using https://github.com/jean-edouard/binterface-parser */

static const class_t classes[] = {
  { 0x00, "(Defined at Interface level)", NULL },
  { 0x01, "Audio", (subclass_t []) {
      { 0x01, "Control Device", NULL },
      { 0x02, "Streaming", NULL },
      { 0x03, "MIDI Streaming", NULL },
      {0,NULL,NULL} } },
  { 0x02, "Communications", (subclass_t []) {
      { 0x01, "Direct Line", NULL },
      { 0x02, "Abstract (modem)", (protocol_t []) {
	  { 0x00, "None" },
	  { 0x01, "AT-commands (v.25ter)" },
	  { 0x02, "AT-commands (PCCA101)" },
	  { 0x03, "AT-commands (PCCA101 + wakeup)" },
	  { 0x04, "AT-commands (GSM)" },
	  { 0x05, "AT-commands (3G)" },
	  { 0x06, "AT-commands (CDMA)" },
	  { 0xfe, "Defined by command set descriptor" },
	  { 0xff, "Vendor Specific (MSFT RNDIS?)" },
	  {0,NULL} } },
      { 0x03, "Telephone", NULL },
      { 0x04, "Multi-Channel", NULL },
      { 0x05, "CAPI Control", NULL },
      { 0x06, "Ethernet Networking", NULL },
      { 0x07, "ATM Networking", NULL },
      { 0x08, "Wireless Handset Control", NULL },
      { 0x09, "Device Management", NULL },
      { 0x0a, "Mobile Direct Line", NULL },
      { 0x0b, "OBEX", NULL },
      { 0x0c, "Ethernet Emulation", (protocol_t []) {
	  { 0x07, "Ethernet Emulation (EEM)" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x03, "Human Interface Device", (subclass_t []) {
      { 0x00, "No Subclass", (protocol_t []) {
	  { 0x00, "None" },
	  { 0x01, "Keyboard" },
	  { 0x02, "Mouse" },
	  {0,NULL} } },
      { 0x01, "Boot Interface Subclass", (protocol_t []) {
	  { 0x00, "None" },
	  { 0x01, "Keyboard" },
	  { 0x02, "Mouse" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x05, "Physical Interface Device", NULL },
  { 0x06, "Imaging", (subclass_t []) {
      { 0x01, "Still Image Capture", (protocol_t []) {
	  { 0x01, "Picture Transfer Protocol (PIMA 15470)" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x07, "Printer", (subclass_t []) {
      { 0x01, "Printer", (protocol_t []) {
	  { 0x00, "Reserved/Undefined" },
	  { 0x01, "Unidirectional" },
	  { 0x02, "Bidirectional" },
	  { 0x03, "IEEE 1284.4 compatible bidirectional" },
	  { 0xff, "Vendor Specific" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x08, "Mass Storage", (subclass_t []) {
      { 0x01, "RBC (typically Flash)", (protocol_t []) {
	  { 0x00, "Control/Bulk/Interrupt" },
	  { 0x01, "Control/Bulk" },
	  { 0x50, "Bulk-Only" },
	  {0,NULL} } },
      { 0x02, "SFF-8020i, MMC-2 (ATAPI)", NULL },
      { 0x03, "QIC-157", NULL },
      { 0x04, "Floppy (UFI)", (protocol_t []) {
	  { 0x00, "Control/Bulk/Interrupt" },
	  { 0x01, "Control/Bulk" },
	  { 0x50, "Bulk-Only" },
	  {0,NULL} } },
      { 0x05, "SFF-8070i", NULL },
      { 0x06, "SCSI", (protocol_t []) {
	  { 0x00, "Control/Bulk/Interrupt" },
	  { 0x01, "Control/Bulk" },
	  { 0x50, "Bulk-Only" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x09, "Hub", (subclass_t []) {
      { 0x00, "Unused", (protocol_t []) {
	  { 0x00, "Full speed (or root) hub" },
	  { 0x01, "Single TT" },
	  { 0x02, "TT per port" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x0a, "CDC Data", (subclass_t []) {
      { 0x00, "Unused", (protocol_t []) {
	  { 0x30, "I.430 ISDN BRI" },
	  { 0x31, "HDLC" },
	  { 0x32, "Transparent" },
	  { 0x50, "Q.921M" },
	  { 0x51, "Q.921" },
	  { 0x52, "Q.921TM" },
	  { 0x90, "V.42bis" },
	  { 0x91, "Q.932 EuroISDN" },
	  { 0x92, "V.120 V.24 rate ISDN" },
	  { 0x93, "CAPI 2.0" },
	  { 0xfd, "Host Based Driver" },
	  { 0xfe, "CDC PUF" },
	  { 0xff, "Vendor specific" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0x0b, "Chip/SmartCard", NULL },
  { 0x0d, "Content Security", NULL },
  { 0x0e, "Video", (subclass_t []) {
      { 0x00, "Undefined", NULL },
      { 0x01, "Video Control", NULL },
      { 0x02, "Video Streaming", NULL },
      { 0x03, "Video Interface Collection", NULL },
      {0,NULL,NULL} } },
  { 0x58, "Xbox", (subclass_t []) {
      { 0x42, "Controller", NULL },
      {0,NULL,NULL} } },
  { 0xdc, "Diagnostic", (subclass_t []) {
      { 0x01, "Reprogrammable Diagnostics", (protocol_t []) {
	  { 0x01, "USB2 Compliance" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0xe0, "Wireless", (subclass_t []) {
      { 0x01, "Radio Frequency", (protocol_t []) {
	  { 0x01, "Bluetooth" },
	  { 0x02, "Ultra WideBand Radio Control" },
	  { 0x03, "RNDIS" },
	  {0,NULL} } },
      { 0x02, "Wireless USB Wire Adapter", (protocol_t []) {
	  { 0x01, "Host Wire Adapter Control/Data Streaming" },
	  { 0x02, "Device Wire Adapter Control/Data Streaming" },
	  { 0x03, "Device Wire Adapter Isochronous Streaming" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0xef, "Miscellaneous Device", (subclass_t []) {
      { 0x01, "?", (protocol_t []) {
	  { 0x01, "Microsoft ActiveSync" },
	  { 0x02, "Palm Sync" },
	  {0,NULL} } },
      { 0x02, "?", (protocol_t []) {
	  { 0x01, "Interface Association" },
	  { 0x02, "Wire Adapter Multifunction Peripheral" },
	  {0,NULL} } },
      { 0x03, "?", (protocol_t []) {
	  { 0x01, "Cable Based Association" },
	  {0,NULL} } },
      { 0x05, "USB3 Vision", NULL },
      {0,NULL,NULL} } },
  { 0xfe, "Application Specific Interface", (subclass_t []) {
      { 0x01, "Device Firmware Update", NULL },
      { 0x02, "IRDA Bridge", NULL },
      { 0x03, "Test and Measurement", (protocol_t []) {
	  { 0x01, "TMC" },
	  { 0x02, "USB488" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  { 0xff, "Vendor Specific Class", (subclass_t []) {
      { 0xff, "Vendor Specific Subclass", (protocol_t []) {
	  { 0xff, "Vendor Specific Protocol" },
	  {0,NULL} } },
      {0,NULL,NULL} } },
  {0,NULL,NULL}
};