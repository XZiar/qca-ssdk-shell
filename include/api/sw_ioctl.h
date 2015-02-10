/*
 * Copyright (c) 2014, 2015, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _SW_IOCTL_H_
#define _SW_IOCTL_H_

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

    /*init*/
#define SW_API_INIT_OFFSET         10
#define SW_API_SWITCH_INIT         (0  + SW_API_INIT_OFFSET)
#define SW_API_SWITCH_RESET        (1  + SW_API_INIT_OFFSET)
#define SW_API_SSDK_CFG            (2  + SW_API_INIT_OFFSET)

    /*port ctrl*/
#define SW_API_PORT_OFFSET          30
#define SW_API_PT_DUPLEX_GET        (0  + SW_API_PORT_OFFSET)
#define SW_API_PT_DUPLEX_SET        (1  + SW_API_PORT_OFFSET)
#define SW_API_PT_SPEED_GET         (2  + SW_API_PORT_OFFSET)
#define SW_API_PT_SPEED_SET         (3  + SW_API_PORT_OFFSET)
#define SW_API_PT_AN_ADV_GET        (4  + SW_API_PORT_OFFSET)
#define SW_API_PT_AN_ADV_SET        (5  + SW_API_PORT_OFFSET)
#define SW_API_PT_AN_GET            (6  + SW_API_PORT_OFFSET)
#define SW_API_PT_AN_ENABLE         (7  + SW_API_PORT_OFFSET)
#define SW_API_PT_AN_RESTART        (8  + SW_API_PORT_OFFSET)
#define SW_API_PT_HDR_SET           (9  + SW_API_PORT_OFFSET)
#define SW_API_PT_HDR_GET           (10 + SW_API_PORT_OFFSET)
#define SW_API_PT_FLOWCTRL_SET      (11 + SW_API_PORT_OFFSET)
#define SW_API_PT_FLOWCTRL_GET      (12 + SW_API_PORT_OFFSET)
#define SW_API_PT_FLOWCTRL_MODE_SET (13 + SW_API_PORT_OFFSET)
#define SW_API_PT_FLOWCTRL_MODE_GET (14 + SW_API_PORT_OFFSET)
#define SW_API_PT_POWERSAVE_SET     (15 + SW_API_PORT_OFFSET)
#define SW_API_PT_POWERSAVE_GET     (16 + SW_API_PORT_OFFSET)
#define SW_API_PT_HIBERNATE_SET     (17 + SW_API_PORT_OFFSET)
#define SW_API_PT_HIBERNATE_GET     (18 + SW_API_PORT_OFFSET)
#define SW_API_PT_CDT               (19 + SW_API_PORT_OFFSET)
#define SW_API_PT_TXHDR_SET         (20 + SW_API_PORT_OFFSET)
#define SW_API_PT_TXHDR_GET         (21 + SW_API_PORT_OFFSET)
#define SW_API_PT_RXHDR_SET         (22 + SW_API_PORT_OFFSET)
#define SW_API_PT_RXHDR_GET         (23 + SW_API_PORT_OFFSET)
#define SW_API_HEADER_TYPE_SET      (24 + SW_API_PORT_OFFSET)
#define SW_API_HEADER_TYPE_GET      (25 + SW_API_PORT_OFFSET)
#define SW_API_TXMAC_STATUS_SET     (26 + SW_API_PORT_OFFSET)
#define SW_API_TXMAC_STATUS_GET     (27 + SW_API_PORT_OFFSET)
#define SW_API_RXMAC_STATUS_SET     (28 + SW_API_PORT_OFFSET)
#define SW_API_RXMAC_STATUS_GET     (29 + SW_API_PORT_OFFSET)
#define SW_API_TXFC_STATUS_SET      (30 + SW_API_PORT_OFFSET)
#define SW_API_TXFC_STATUS_GET      (31 + SW_API_PORT_OFFSET)
#define SW_API_RXFC_STATUS_SET      (32 + SW_API_PORT_OFFSET)
#define SW_API_RXFC_STATUS_GET      (33 + SW_API_PORT_OFFSET)
#define SW_API_BP_STATUS_SET        (34 + SW_API_PORT_OFFSET)
#define SW_API_BP_STATUS_GET        (35 + SW_API_PORT_OFFSET)
#define SW_API_PT_LINK_MODE_SET     (36 + SW_API_PORT_OFFSET)
#define SW_API_PT_LINK_MODE_GET     (37 + SW_API_PORT_OFFSET)
#define SW_API_PT_LINK_STATUS_GET   (38 + SW_API_PORT_OFFSET)
#define SW_API_PT_MAC_LOOPBACK_SET   (39+ SW_API_PORT_OFFSET)
#define SW_API_PT_MAC_LOOPBACK_GET   (40+ SW_API_PORT_OFFSET)
#define SW_API_PTS_LINK_STATUS_GET   (41 + SW_API_PORT_OFFSET)
#define SW_API_PT_CONGESTION_DROP_SET   (42+ SW_API_PORT_OFFSET)
#define SW_API_PT_CONGESTION_DROP_GET   (43+ SW_API_PORT_OFFSET)
#define SW_API_PT_RING_FLOW_CTRL_THRES_SET   (44+ SW_API_PORT_OFFSET)
#define SW_API_PT_RING_FLOW_CTRL_THRES_GET   (45+ SW_API_PORT_OFFSET)



    /*vlan*/
#define SW_API_VLAN_OFFSET         100
#define SW_API_VLAN_ADD            (0 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_DEL            (1 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_MEM_UPDATE     (2 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_FIND           (3 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_NEXT           (4 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_APPEND         (5 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_FLUSH          (6 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_FID_SET        (7 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_FID_GET        (8 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_MEMBER_ADD     (9 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_MEMBER_DEL     (10 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_LEARN_STATE_SET (11 + SW_API_VLAN_OFFSET)
#define SW_API_VLAN_LEARN_STATE_GET (12 + SW_API_VLAN_OFFSET)


    /*portvlan*/
#define SW_API_PORTVLAN_OFFSET       200
#define SW_API_PT_ING_MODE_GET       (0  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_ING_MODE_SET       (1  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_EG_MODE_GET        (2  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_EG_MODE_SET        (3  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_MEM_ADD       (4  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_MEM_DEL       (5  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_MEM_UPDATE    (6  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_MEM_GET       (7  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_VID_GET        (8  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_VID_SET        (9  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_FORCE_DEF_VID_SET  (10  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_FORCE_DEF_VID_GET  (11  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_FORCE_PORTVLAN_SET (12  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_FORCE_PORTVLAN_GET (13  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_NESTVLAN_SET       (14  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_NESTVLAN_GET       (15  + SW_API_PORTVLAN_OFFSET)
#define SW_API_NESTVLAN_TPID_SET     (16  + SW_API_PORTVLAN_OFFSET)
#define SW_API_NESTVLAN_TPID_GET     (17  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_IN_VLAN_MODE_SET   (18  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_IN_VLAN_MODE_GET   (19  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_TLS_SET            (20  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_TLS_GET            (21  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_PRI_PROPAGATION_SET  (22  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_PRI_PROPAGATION_GET  (23  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_SVID_SET       (24  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_SVID_GET       (25  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_CVID_SET       (26  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_DEF_CVID_GET       (27  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_PROPAGATION_SET (28  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_PROPAGATION_GET (29  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_TRANS_ADD     (30  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_TRANS_DEL     (31  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_TRANS_GET     (32  + SW_API_PORTVLAN_OFFSET)
#define SW_API_QINQ_MODE_SET         (33  + SW_API_PORTVLAN_OFFSET)
#define SW_API_QINQ_MODE_GET         (34  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_QINQ_ROLE_SET      (35  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_QINQ_ROLE_GET      (36  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VLAN_TRANS_ITERATE (37  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_MAC_VLAN_XLT_SET   (38  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_MAC_VLAN_XLT_GET   (39  + SW_API_PORTVLAN_OFFSET)
#define SW_API_NETISOLATE_SET   (40  + SW_API_PORTVLAN_OFFSET)
#define SW_API_NETISOLATE_GET   (41  + SW_API_PORTVLAN_OFFSET)
#define SW_API_EG_FLTR_BYPASS_EN_SET (42 + SW_API_PORTVLAN_OFFSET)
#define SW_API_EG_FLTR_BYPASS_EN_GET (43 + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VRF_ID_SET            (44  + SW_API_PORTVLAN_OFFSET)
#define SW_API_PT_VRF_ID_GET            (45  + SW_API_PORTVLAN_OFFSET)

    /*fdb*/
#define SW_API_FDB_OFFSET             300
#define SW_API_FDB_ADD                (0  + SW_API_FDB_OFFSET)
#define SW_API_FDB_DELALL             (1  + SW_API_FDB_OFFSET)
#define SW_API_FDB_DELPORT            (2  + SW_API_FDB_OFFSET)
#define SW_API_FDB_DELMAC             (3  + SW_API_FDB_OFFSET)
#define SW_API_FDB_FIRST              (4  + SW_API_FDB_OFFSET)
#define SW_API_FDB_NEXT               (5  + SW_API_FDB_OFFSET)
#define SW_API_FDB_FIND               (6  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PT_LEARN_SET       (7  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PT_LEARN_GET       (8  + SW_API_FDB_OFFSET)
#define SW_API_FDB_AGE_CTRL_SET       (9  + SW_API_FDB_OFFSET)
#define SW_API_FDB_AGE_CTRL_GET       (10  + SW_API_FDB_OFFSET)
#define SW_API_FDB_AGE_TIME_SET       (11  + SW_API_FDB_OFFSET)
#define SW_API_FDB_AGE_TIME_GET       (12  + SW_API_FDB_OFFSET)
#define SW_API_FDB_ITERATE            (13  + SW_API_FDB_OFFSET)
#define SW_API_FDB_EXTEND_NEXT        (14  + SW_API_FDB_OFFSET)
#define SW_API_PT_FDB_LEARN_LIMIT_SET (15  + SW_API_FDB_OFFSET)
#define SW_API_PT_FDB_LEARN_LIMIT_GET (16  + SW_API_FDB_OFFSET)
#define SW_API_PT_FDB_LEARN_EXCEED_CMD_SET (17  + SW_API_FDB_OFFSET)
#define SW_API_PT_FDB_LEARN_EXCEED_CMD_GET (18  + SW_API_FDB_OFFSET)
#define SW_API_FDB_LEARN_LIMIT_SET         (19  + SW_API_FDB_OFFSET)
#define SW_API_FDB_LEARN_LIMIT_GET         (20  + SW_API_FDB_OFFSET)
#define SW_API_FDB_LEARN_EXCEED_CMD_SET    (21  + SW_API_FDB_OFFSET)
#define SW_API_FDB_LEARN_EXCEED_CMD_GET    (22  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RESV_ADD                (23  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RESV_DEL                (24  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RESV_FIND               (25  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RESV_ITERATE            (26  + SW_API_FDB_OFFSET)
#define SW_API_FDB_EXTEND_FIRST            (27  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PT_LEARN_STATIC_SET     (28  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PT_LEARN_STATIC_GET     (29  + SW_API_FDB_OFFSET)
#define SW_API_FDB_TRANSFER                (30  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PORT_ADD                (31  + SW_API_FDB_OFFSET)
#define SW_API_FDB_PORT_DEL                (32  + SW_API_FDB_OFFSET)
#define SW_API_FDB_VLAN_IVL_SVL_SET        (33  + SW_API_FDB_OFFSET)
#define SW_API_FDB_VLAN_IVL_SVL_GET        (34  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RFS_SET                 (35  + SW_API_FDB_OFFSET)
#define SW_API_FDB_RFS_DEL                 (36  + SW_API_FDB_OFFSET)


    /*acl*/
#define SW_API_ACL_OFFSET             400
#define SW_API_ACL_LIST_CREAT         (0  + SW_API_ACL_OFFSET)
#define SW_API_ACL_LIST_DESTROY       (1  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_ADD           (2  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_DELETE        (3  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_QUERY         (4  + SW_API_ACL_OFFSET)
#define SW_API_ACL_LIST_BIND          (5  + SW_API_ACL_OFFSET)
#define SW_API_ACL_LIST_UNBIND        (6  + SW_API_ACL_OFFSET)
#define SW_API_ACL_STATUS_SET         (7  + SW_API_ACL_OFFSET)
#define SW_API_ACL_STATUS_GET         (8  + SW_API_ACL_OFFSET)
#define SW_API_ACL_LIST_DUMP          (9  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_DUMP          (10  + SW_API_ACL_OFFSET)
#define SW_API_ACL_PT_UDF_PROFILE_SET (11  + SW_API_ACL_OFFSET)
#define SW_API_ACL_PT_UDF_PROFILE_GET (12  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_ACTIVE        (13  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_DEACTIVE      (14  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_SRC_FILTER_STS_SET      (15  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_SRC_FILTER_STS_GET      (16  + SW_API_ACL_OFFSET)
#define SW_API_ACL_RULE_GET_OFFSET      (17  + SW_API_ACL_OFFSET)

    /*qos*/
#define SW_API_QOS_OFFSET             500
#define SW_API_QOS_SCH_MODE_SET       (0  + SW_API_QOS_OFFSET)
#define SW_API_QOS_SCH_MODE_GET       (1  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QU_TX_BUF_ST_SET   (2  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QU_TX_BUF_ST_GET   (3  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QU_TX_BUF_NR_SET   (4  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QU_TX_BUF_NR_GET   (5  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_TX_BUF_ST_SET   (6  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_TX_BUF_ST_GET   (7  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_TX_BUF_NR_SET   (8  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_TX_BUF_NR_GET   (9  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_RX_BUF_NR_SET   (10  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_RX_BUF_NR_GET   (11  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_MODE_SET        (12  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_MODE_GET        (13  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_MODE_PRI_SET    (14  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_MODE_PRI_GET    (15  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PORT_DEF_UP_SET    (16  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PORT_DEF_UP_GET    (17  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PORT_SCH_MODE_SET  (18  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PORT_SCH_MODE_GET  (19  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_DEF_SPRI_SET    (20  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_DEF_SPRI_GET    (21  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_DEF_CPRI_SET    (22  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_DEF_CPRI_GET    (23  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_FORCE_SPRI_ST_SET   (24  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_FORCE_SPRI_ST_GET   (25  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_FORCE_CPRI_ST_SET   (26  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_FORCE_CPRI_ST_GET   (27  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QUEUE_REMARK_SET   (28  + SW_API_QOS_OFFSET)
#define SW_API_QOS_QUEUE_REMARK_GET   (29  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_RED_EN_SET   (30  + SW_API_QOS_OFFSET)
#define SW_API_QOS_PT_RED_EN_GET   (31  + SW_API_QOS_OFFSET)

    /* igmp */
#define SW_API_IGMP_OFFSET            600
#define SW_API_PT_IGMPS_MODE_SET      (0  + SW_API_IGMP_OFFSET)
#define SW_API_PT_IGMPS_MODE_GET      (1 + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_MLD_CMD_SET       (2  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_MLD_CMD_GET       (3  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_PT_JOIN_SET       (4  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_PT_JOIN_GET       (5  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_PT_LEAVE_SET      (6  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_PT_LEAVE_GET      (7  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_RP_SET            (8  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_RP_GET            (9  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_CREAT_SET   (10  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_CREAT_GET   (11  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_STATIC_SET  (12  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_STATIC_GET  (13  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_LEAKY_SET   (14  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_LEAKY_GET   (15  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_V3_SET      (16  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_V3_GET      (17  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_QUEUE_SET   (18  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_ENTRY_QUEUE_GET   (19  + SW_API_IGMP_OFFSET)
#define SW_API_PT_IGMP_LEARN_LIMIT_SET (20  + SW_API_IGMP_OFFSET)
#define SW_API_PT_IGMP_LEARN_LIMIT_GET (21  + SW_API_IGMP_OFFSET)
#define SW_API_PT_IGMP_LEARN_EXCEED_CMD_SET (22  + SW_API_IGMP_OFFSET)
#define SW_API_PT_IGMP_LEARN_EXCEED_CMD_GET (23  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_SG_ENTRY_SET (24  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_SG_ENTRY_CLEAR (25  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_SG_ENTRY_SHOW (26  + SW_API_IGMP_OFFSET)
#define SW_API_IGMP_SG_ENTRY_QUERY (27  + SW_API_IGMP_OFFSET)

    /* leaky */
#define SW_API_LEAKY_OFFSET           700
#define SW_API_UC_LEAKY_MODE_SET      (0  + SW_API_LEAKY_OFFSET)
#define SW_API_UC_LEAKY_MODE_GET      (1  + SW_API_LEAKY_OFFSET)
#define SW_API_MC_LEAKY_MODE_SET      (2  + SW_API_LEAKY_OFFSET)
#define SW_API_MC_LEAKY_MODE_GET      (3  + SW_API_LEAKY_OFFSET)
#define SW_API_ARP_LEAKY_MODE_SET     (4  + SW_API_LEAKY_OFFSET)
#define SW_API_ARP_LEAKY_MODE_GET     (5  + SW_API_LEAKY_OFFSET)
#define SW_API_PT_UC_LEAKY_MODE_SET   (6  + SW_API_LEAKY_OFFSET)
#define SW_API_PT_UC_LEAKY_MODE_GET   (7  + SW_API_LEAKY_OFFSET)
#define SW_API_PT_MC_LEAKY_MODE_SET   (8  + SW_API_LEAKY_OFFSET)
#define SW_API_PT_MC_LEAKY_MODE_GET   (9  + SW_API_LEAKY_OFFSET)

    /*mirror*/
#define SW_API_MIR_OFFSET             800
#define SW_API_MIRROR_ANALY_PT_SET    (0  + SW_API_MIR_OFFSET)
#define SW_API_MIRROR_ANALY_PT_GET    (1  + SW_API_MIR_OFFSET)
#define SW_API_MIRROR_IN_PT_SET       (2  + SW_API_MIR_OFFSET)
#define SW_API_MIRROR_IN_PT_GET       (3  + SW_API_MIR_OFFSET)
#define SW_API_MIRROR_EG_PT_SET       (4  + SW_API_MIR_OFFSET)
#define SW_API_MIRROR_EG_PT_GET       (5  + SW_API_MIR_OFFSET)

    /*rate*/
#define SW_API_RATE_OFFSET            900
#define SW_API_RATE_QU_EGRL_SET       (0  + SW_API_RATE_OFFSET)
#define SW_API_RATE_QU_EGRL_GET       (1  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PT_EGRL_SET       (2  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PT_EGRL_GET       (3  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PT_INRL_SET       (4  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PT_INRL_GET       (5  + SW_API_RATE_OFFSET)
#define SW_API_STORM_CTRL_FRAME_SET   (6  + SW_API_RATE_OFFSET)
#define SW_API_STORM_CTRL_FRAME_GET   (7  + SW_API_RATE_OFFSET)
#define SW_API_STORM_CTRL_RATE_SET    (8  + SW_API_RATE_OFFSET)
#define SW_API_STORM_CTRL_RATE_GET    (9  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PORT_POLICER_SET  (10  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PORT_POLICER_GET  (11  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PORT_SHAPER_SET   (12  + SW_API_RATE_OFFSET)
#define SW_API_RATE_PORT_SHAPER_GET   (13  + SW_API_RATE_OFFSET)
#define SW_API_RATE_QUEUE_SHAPER_SET  (14  + SW_API_RATE_OFFSET)
#define SW_API_RATE_QUEUE_SHAPER_GET  (15  + SW_API_RATE_OFFSET)
#define SW_API_RATE_ACL_POLICER_SET   (16  + SW_API_RATE_OFFSET)
#define SW_API_RATE_ACL_POLICER_GET   (17  + SW_API_RATE_OFFSET)
#define  SW_API_RATE_PT_ADDRATEBYTE_SET   (18  + SW_API_RATE_OFFSET)
#define  SW_API_RATE_PT_ADDRATEBYTE_GET   (19  + SW_API_RATE_OFFSET)
#define  SW_API_RATE_PT_GOL_FLOW_EN_SET   (20  + SW_API_RATE_OFFSET)
#define  SW_API_RATE_PT_GOL_FLOW_EN_GET   (21  + SW_API_RATE_OFFSET)

    /*stp*/
#define SW_API_STP_OFFSET             1000
#define SW_API_STP_PT_STATE_SET       (0  + SW_API_STP_OFFSET)
#define SW_API_STP_PT_STATE_GET       (1  + SW_API_STP_OFFSET)

    /*mib*/
#define SW_API_MIB_OFFSET             1100
#define SW_API_PT_MIB_GET             (0  + SW_API_MIB_OFFSET)
#define SW_API_MIB_STATUS_SET         (1  + SW_API_MIB_OFFSET)
#define SW_API_MIB_STATUS_GET         (2  + SW_API_MIB_OFFSET)
#define SW_API_PT_MIB_FLUSH_COUNTERS         (3+ SW_API_MIB_OFFSET)
#define SW_API_MIB_CPU_KEEP_SET         (4+ SW_API_MIB_OFFSET)
#define SW_API_MIB_CPU_KEEP_GET         (5+ SW_API_MIB_OFFSET)

    /*misc*/
#define SW_API_MISC_OFFSET            1200
#define SW_API_ARP_STATUS_SET         (0  + SW_API_MISC_OFFSET)
#define SW_API_ARP_STATUS_GET         (1  + SW_API_MISC_OFFSET)
#define SW_API_FRAME_MAX_SIZE_SET     (2  + SW_API_MISC_OFFSET)
#define SW_API_FRAME_MAX_SIZE_GET     (3  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_SA_CMD_SET      (4  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_SA_CMD_GET      (5  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_UC_FILTER_SET   (6  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_UC_FILTER_GET   (7  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_MC_FILTER_SET   (8  + SW_API_MISC_OFFSET)
#define SW_API_PT_UNK_MC_FILTER_GET   (9  + SW_API_MISC_OFFSET)
#define SW_API_PT_BC_FILTER_SET       (10  + SW_API_MISC_OFFSET)
#define SW_API_PT_BC_FILTER_GET       (11  + SW_API_MISC_OFFSET)
#define SW_API_CPU_PORT_STATUS_SET    (12  + SW_API_MISC_OFFSET)
#define SW_API_CPU_PORT_STATUS_GET    (13  + SW_API_MISC_OFFSET)
#define SW_API_BC_TO_CPU_PORT_SET     (14  + SW_API_MISC_OFFSET)
#define SW_API_BC_TO_CPU_PORT_GET     (15  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_CMD_SET          (16  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_CMD_GET          (17  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_STATUS_SET       (18  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_STATUS_GET       (19  + SW_API_MISC_OFFSET)
#define SW_API_PT_DHCP_SET            (20  + SW_API_MISC_OFFSET)
#define SW_API_PT_DHCP_GET            (21  + SW_API_MISC_OFFSET)
#define SW_API_ARP_CMD_SET            (22  + SW_API_MISC_OFFSET)
#define SW_API_ARP_CMD_GET            (23  + SW_API_MISC_OFFSET)
#define SW_API_EAPOL_CMD_SET          (24  + SW_API_MISC_OFFSET)
#define SW_API_EAPOL_CMD_GET          (25  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_ADD      (26  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_DEL      (27  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_GET      (28  + SW_API_MISC_OFFSET)
#define SW_API_EAPOL_STATUS_SET       (29  + SW_API_MISC_OFFSET)
#define SW_API_EAPOL_STATUS_GET       (30  + SW_API_MISC_OFFSET)
#define SW_API_RIPV1_STATUS_SET       (31  + SW_API_MISC_OFFSET)
#define SW_API_RIPV1_STATUS_GET       (32  + SW_API_MISC_OFFSET)
#define SW_API_PT_ARP_REQ_STATUS_SET         (33  + SW_API_MISC_OFFSET)
#define SW_API_PT_ARP_REQ_STATUS_GET         (34  + SW_API_MISC_OFFSET)
#define SW_API_PT_ARP_ACK_STATUS_SET         (35  + SW_API_MISC_OFFSET)
#define SW_API_PT_ARP_ACK_STATUS_GET         (36  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_TABLE_ADD      (37  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_TABLE_DEL      (38  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_TABLE_GET      (39  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_ID_SET         (40  + SW_API_MISC_OFFSET)
#define SW_API_PPPOE_SESSION_ID_GET         (41  + SW_API_MISC_OFFSET)
#define SW_API_INTR_MASK_SET                (42  + SW_API_MISC_OFFSET)
#define SW_API_INTR_MASK_GET                (43  + SW_API_MISC_OFFSET)
#define SW_API_INTR_STATUS_GET              (44  + SW_API_MISC_OFFSET)
#define SW_API_INTR_STATUS_CLEAR            (45  + SW_API_MISC_OFFSET)
#define SW_API_INTR_PORT_LINK_MASK_SET      (46  + SW_API_MISC_OFFSET)
#define SW_API_INTR_PORT_LINK_MASK_GET      (47  + SW_API_MISC_OFFSET)
#define SW_API_INTR_PORT_LINK_STATUS_GET    (48  + SW_API_MISC_OFFSET)
#define SW_API_INTR_MASK_MAC_LINKCHG_SET      (49  + SW_API_MISC_OFFSET)
#define SW_API_INTR_MASK_MAC_LINKCHG_GET      (50  + SW_API_MISC_OFFSET)
#define SW_API_INTR_STATUS_MAC_LINKCHG_GET    (51  + SW_API_MISC_OFFSET)
#define SW_API_INTR_STATUS_MAC_LINKCHG_CLEAR    (52 + SW_API_MISC_OFFSET)
#define SW_API_CPU_VID_EN_SET      (53  + SW_API_MISC_OFFSET)
#define SW_API_CPU_VID_EN_GET    (54  + SW_API_MISC_OFFSET)
#define SW_API_RTD_PPPOE_EN_SET      (55  + SW_API_MISC_OFFSET)
#define SW_API_RTD_PPPOE_EN_GET    (56  + SW_API_MISC_OFFSET)
#define SW_API_GLOBAL_MACADDR_SET      (57  + SW_API_MISC_OFFSET)
#define SW_API_GLOBAL_MACADDR_GET    (58  + SW_API_MISC_OFFSET)
#define SW_API_LLDP_STATUS_SET          (59  + SW_API_MISC_OFFSET)
#define SW_API_LLDP_STATUS_GET          (60  + SW_API_MISC_OFFSET)
#define SW_API_FRAME_CRC_RESERVE_SET          (61  + SW_API_MISC_OFFSET)
#define SW_API_FRAME_CRC_RESERVE_GET          (62  + SW_API_MISC_OFFSET)




    /*led*/
#define SW_API_LED_OFFSET             1300
#define SW_API_LED_PATTERN_SET        (0  + SW_API_LED_OFFSET)
#define SW_API_LED_PATTERN_GET        (1  + SW_API_LED_OFFSET)

    /* cosmap */
#define SW_API_COSMAP_OFFSET              1400
#define SW_API_COSMAP_UP_QU_SET           (0  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_QU_GET           (1  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_QU_SET         (2  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_QU_GET         (3  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_PRI_SET     (4  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_PRI_GET     (5  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_DP_SET      (6  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_DP_GET      (7  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_PRI_SET       (8  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_PRI_GET       (9  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_DP_SET        (10  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_DP_GET        (11  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_PRI_TO_QU_SET       (12  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_PRI_TO_QU_GET       (13  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_PRI_TO_EHQU_SET     (14  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_PRI_TO_EHQU_GET     (15  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_EG_REMARK_SET       (16  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_EG_REMARK_GET       (17  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_EHPRI_SET     (18  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_EHPRI_GET     (19  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_EHDP_SET      (20  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_DSCP_TO_EHDP_GET      (21  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_EHPRI_SET       (22  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_EHPRI_GET       (23  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_EHDP_SET        (24  + SW_API_COSMAP_OFFSET)
#define SW_API_COSMAP_UP_TO_EHDP_GET        (25  + SW_API_COSMAP_OFFSET)

    /* sec */
#define SW_API_SEC_OFFSET             1500
#define SW_API_SEC_NORM_SET           (0  + SW_API_SEC_OFFSET)
#define SW_API_SEC_NORM_GET           (1  + SW_API_SEC_OFFSET)
#define SW_API_SEC_MAC_SET            (2  + SW_API_SEC_OFFSET)
#define SW_API_SEC_MAC_GET            (3  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP_SET             (4  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP_GET             (5  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP4_SET            (6  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP4_GET            (7  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP6_SET            (8  + SW_API_SEC_OFFSET)
#define SW_API_SEC_IP6_GET            (9  + SW_API_SEC_OFFSET)
#define SW_API_SEC_TCP_SET            (10  + SW_API_SEC_OFFSET)
#define SW_API_SEC_TCP_GET            (11  + SW_API_SEC_OFFSET)
#define SW_API_SEC_UDP_SET            (12  + SW_API_SEC_OFFSET)
#define SW_API_SEC_UDP_GET            (13  + SW_API_SEC_OFFSET)
#define SW_API_SEC_ICMP4_SET          (14  + SW_API_SEC_OFFSET)
#define SW_API_SEC_ICMP4_GET          (15  + SW_API_SEC_OFFSET)
#define SW_API_SEC_ICMP6_SET          (16  + SW_API_SEC_OFFSET)
#define SW_API_SEC_ICMP6_GET          (17  + SW_API_SEC_OFFSET)

    /* ip */
#define SW_API_IP_OFFSET             1600
#define SW_API_IP_HOST_ADD           (0  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_DEL           (1  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_GET           (2  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_NEXT          (3  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_COUNTER_BIND  (4  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_PPPOE_BIND    (5  + SW_API_IP_OFFSET)
#define SW_API_IP_PT_ARP_LEARN_SET   (6  + SW_API_IP_OFFSET)
#define SW_API_IP_PT_ARP_LEARN_GET   (7  + SW_API_IP_OFFSET)
#define SW_API_IP_ARP_LEARN_SET      (8  + SW_API_IP_OFFSET)
#define SW_API_IP_ARP_LEARN_GET      (9  + SW_API_IP_OFFSET)
#define SW_API_IP_SOURCE_GUARD_SET   (10  + SW_API_IP_OFFSET)
#define SW_API_IP_SOURCE_GUARD_GET   (11  + SW_API_IP_OFFSET)
#define SW_API_IP_ARP_GUARD_SET      (12  + SW_API_IP_OFFSET)
#define SW_API_IP_ARP_GUARD_GET      (13  + SW_API_IP_OFFSET)
#define SW_API_IP_ROUTE_STATUS_SET   (14  + SW_API_IP_OFFSET)
#define SW_API_IP_ROUTE_STATUS_GET   (15  + SW_API_IP_OFFSET)
#define SW_API_IP_INTF_ENTRY_ADD       (16  + SW_API_IP_OFFSET)
#define SW_API_IP_INTF_ENTRY_DEL       (17  + SW_API_IP_OFFSET)
#define SW_API_IP_INTF_ENTRY_NEXT      (18  + SW_API_IP_OFFSET)
#define SW_API_IP_UNK_SOURCE_CMD_SET (19  + SW_API_IP_OFFSET)
#define SW_API_IP_UNK_SOURCE_CMD_GET (20  + SW_API_IP_OFFSET)
#define SW_API_ARP_UNK_SOURCE_CMD_SET (21  + SW_API_IP_OFFSET)
#define SW_API_ARP_UNK_SOURCE_CMD_GET (22  + SW_API_IP_OFFSET)
#define SW_API_IP_AGE_TIME_SET       (23  + SW_API_IP_OFFSET)
#define SW_API_IP_AGE_TIME_GET       (24  + SW_API_IP_OFFSET)
#define SW_API_WCMP_HASH_MODE_SET    (25  + SW_API_IP_OFFSET)
#define SW_API_WCMP_HASH_MODE_GET    (26  + SW_API_IP_OFFSET)
#define SW_API_IP_VRF_BASE_ADDR_SET    (27  + SW_API_IP_OFFSET)
#define SW_API_IP_VRF_BASE_ADDR_GET    (28  + SW_API_IP_OFFSET)
#define SW_API_IP_VRF_BASE_MASK_SET    (29  + SW_API_IP_OFFSET)
#define SW_API_IP_VRF_BASE_MASK_GET    (30  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_ROUTE_SET    (31  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_ROUTE_GET    (32  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_ROUTE_SET    (33  + SW_API_IP_OFFSET)
#define SW_API_IP_HOST_ROUTE_GET    (34  + SW_API_IP_OFFSET)
#define SW_API_IP_WCMP_ENTRY_SET    (35  + SW_API_IP_OFFSET)
#define SW_API_IP_WCMP_ENTRY_GET    (36  + SW_API_IP_OFFSET)
#define SW_API_IP_RFS_IP4_SET       (37  + SW_API_IP_OFFSET)
#define SW_API_IP_RFS_IP6_SET       (38  + SW_API_IP_OFFSET)
#define SW_API_IP_RFS_IP4_DEL       (39  + SW_API_IP_OFFSET)
#define SW_API_IP_RFS_IP6_DEL       (40  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_FLOW_CMD_SET    (41  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_FLOW_CMD_GET    (42  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_RT_FLOW_CMD_SET    (43  + SW_API_IP_OFFSET)
#define SW_API_IP_DEFAULT_RT_FLOW_CMD_GET    (44  + SW_API_IP_OFFSET)


    /* nat */
#define SW_API_NAT_OFFSET            1700
#define SW_API_NAT_ADD               (0  + SW_API_NAT_OFFSET)
#define SW_API_NAT_DEL               (1  + SW_API_NAT_OFFSET)
#define SW_API_NAT_GET               (2  + SW_API_NAT_OFFSET)
#define SW_API_NAT_NEXT              (3  + SW_API_NAT_OFFSET)
#define SW_API_NAT_COUNTER_BIND      (4  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_ADD              (5  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_DEL              (6  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_GET              (7  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_NEXT             (8  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_COUNTER_BIND     (9  + SW_API_NAT_OFFSET)
#define SW_API_NAT_STATUS_SET        (10  + SW_API_NAT_OFFSET)
#define SW_API_NAT_STATUS_GET        (11  + SW_API_NAT_OFFSET)
#define SW_API_NAT_HASH_MODE_SET     (12  + SW_API_NAT_OFFSET)
#define SW_API_NAT_HASH_MODE_GET     (13  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_STATUS_SET       (14  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_STATUS_GET       (15  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_MODE_SET         (16  + SW_API_NAT_OFFSET)
#define SW_API_NAPT_MODE_GET         (17  + SW_API_NAT_OFFSET)
#define SW_API_PRV_BASE_ADDR_SET     (18  + SW_API_NAT_OFFSET)
#define SW_API_PRV_BASE_ADDR_GET     (19  + SW_API_NAT_OFFSET)
#define SW_API_PRV_ADDR_MODE_SET     (20  + SW_API_NAT_OFFSET)
#define SW_API_PRV_ADDR_MODE_GET     (21  + SW_API_NAT_OFFSET)
#define SW_API_PUB_ADDR_ENTRY_ADD    (22  + SW_API_NAT_OFFSET)
#define SW_API_PUB_ADDR_ENTRY_DEL    (23  + SW_API_NAT_OFFSET)
#define SW_API_PUB_ADDR_ENTRY_NEXT   (24  + SW_API_NAT_OFFSET)
#define SW_API_NAT_UNK_SESSION_CMD_SET (25  + SW_API_NAT_OFFSET)
#define SW_API_NAT_UNK_SESSION_CMD_GET (26  + SW_API_NAT_OFFSET)
#define SW_API_PRV_BASE_MASK_SET       (27  + SW_API_NAT_OFFSET)
#define SW_API_PRV_BASE_MASK_GET       (28  + SW_API_NAT_OFFSET)
#define SW_API_NAT_GLOBAL_SET          (29  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_ADD              (30  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_DEL              (31  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_GET              (32  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_NEXT             (33  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_COUNTER_BIND     (34  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_COOKIE_SET       (35  + SW_API_NAT_OFFSET)
#define SW_API_FLOW_RFS_SET          (36  + SW_API_NAT_OFFSET)


    /* trunk */
#define SW_API_TRUNK_OFFSET            1800
#define SW_API_TRUNK_GROUP_SET         (0  + SW_API_TRUNK_OFFSET)
#define SW_API_TRUNK_GROUP_GET         (1  + SW_API_TRUNK_OFFSET)
#define SW_API_TRUNK_HASH_SET          (2  + SW_API_TRUNK_OFFSET)
#define SW_API_TRUNK_HASH_GET          (3  + SW_API_TRUNK_OFFSET)
#define SW_API_TRUNK_MAN_SA_SET        (4  + SW_API_TRUNK_OFFSET)
#define SW_API_TRUNK_MAN_SA_GET        (5  + SW_API_TRUNK_OFFSET)

    /* Interface Control */
#define SW_API_INTERFACE_OFFSET        1900
#define SW_API_MAC_MODE_SET            (0  + SW_API_INTERFACE_OFFSET)
#define SW_API_MAC_MODE_GET            (1  + SW_API_INTERFACE_OFFSET)
#define SW_API_PORT_3AZ_STATUS_SET     (2  + SW_API_INTERFACE_OFFSET)
#define SW_API_PORT_3AZ_STATUS_GET     (3  + SW_API_INTERFACE_OFFSET)
#define SW_API_PHY_MODE_SET            (4  + SW_API_INTERFACE_OFFSET)
#define SW_API_PHY_MODE_GET            (5  + SW_API_INTERFACE_OFFSET)
#define SW_API_FX100_CTRL_SET          (6  + SW_API_INTERFACE_OFFSET)
#define SW_API_FX100_CTRL_GET          (7  + SW_API_INTERFACE_OFFSET)
#define SW_API_FX100_STATUS_GET        (8  + SW_API_INTERFACE_OFFSET)
#define SW_API_MAC06_EXCH_SET          (9  + SW_API_INTERFACE_OFFSET)
#define SW_API_MAC06_EXCH_GET          (10  + SW_API_INTERFACE_OFFSET)

    /*debug*/
#define SW_API_DEBUG_OFFSET        10000
#define SW_API_PHY_GET             (0  + SW_API_DEBUG_OFFSET)
#define SW_API_PHY_SET             (1  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_GET             (2  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_SET             (3  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_ENTRY_GET       (4  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_ENTRY_SET       (5  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_FIELD_GET       (6  + SW_API_DEBUG_OFFSET)
#define SW_API_REG_FIELD_SET       (7  + SW_API_DEBUG_OFFSET)


#define SW_API_MAX                 0xffff

#ifdef __cplusplus
}
#endif                          /* __cplusplus */
#endif                          /* _SW_IOCTL_H_ */
