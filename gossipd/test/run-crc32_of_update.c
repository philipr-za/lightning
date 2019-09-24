int unused_main(int argc, char *argv[]);
#define main unused_main
#include "../gossipd.c"
#include "../gossip_generation.c"
#undef main
#include <stdio.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for check_ping_make_pong */
bool check_ping_make_pong(const tal_t *ctx UNNEEDED, const u8 *ping UNNEEDED, u8 **pong UNNEEDED)
{ fprintf(stderr, "check_ping_make_pong called!\n"); abort(); }
/* Generated stub for daemon_conn_new_ */
struct daemon_conn *daemon_conn_new_(const tal_t *ctx UNNEEDED, int fd UNNEEDED,
				     struct io_plan *(*recv)(struct io_conn * UNNEEDED,
							     const u8 * UNNEEDED,
							     void *) UNNEEDED,
				     void (*outq_empty)(void *) UNNEEDED,
				     void *arg UNNEEDED)
{ fprintf(stderr, "daemon_conn_new_ called!\n"); abort(); }
/* Generated stub for daemon_conn_read_next */
struct io_plan *daemon_conn_read_next(struct io_conn *conn UNNEEDED,
				      struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_read_next called!\n"); abort(); }
/* Generated stub for daemon_conn_send */
void daemon_conn_send(struct daemon_conn *dc UNNEEDED, const u8 *msg UNNEEDED)
{ fprintf(stderr, "daemon_conn_send called!\n"); abort(); }
/* Generated stub for daemon_conn_send_fd */
void daemon_conn_send_fd(struct daemon_conn *dc UNNEEDED, int fd UNNEEDED)
{ fprintf(stderr, "daemon_conn_send_fd called!\n"); abort(); }
/* Generated stub for daemon_conn_wake */
void daemon_conn_wake(struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_wake called!\n"); abort(); }
/* Generated stub for daemon_shutdown */
void daemon_shutdown(void)
{ fprintf(stderr, "daemon_shutdown called!\n"); abort(); }
/* Generated stub for decode_scid_query_flags */
bigsize_t *decode_scid_query_flags(const tal_t *ctx UNNEEDED,
				   const struct tlv_query_short_channel_ids_tlvs_query_flags *qf UNNEEDED)
{ fprintf(stderr, "decode_scid_query_flags called!\n"); abort(); }
/* Generated stub for decode_short_ids */
struct short_channel_id *decode_short_ids(const tal_t *ctx UNNEEDED, const u8 *encoded UNNEEDED)
{ fprintf(stderr, "decode_short_ids called!\n"); abort(); }
/* Generated stub for dump_memleak */
bool dump_memleak(struct htable *memtable UNNEEDED)
{ fprintf(stderr, "dump_memleak called!\n"); abort(); }
/* Generated stub for first_chan */
struct chan *first_chan(const struct node *node UNNEEDED, struct chan_map_iter *i UNNEEDED)
{ fprintf(stderr, "first_chan called!\n"); abort(); }
/* Generated stub for free_chan */
void free_chan(struct routing_state *rstate UNNEEDED, struct chan *chan UNNEEDED)
{ fprintf(stderr, "free_chan called!\n"); abort(); }
/* Generated stub for fromwire_amount_below_minimum */
bool fromwire_amount_below_minimum(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct amount_msat *htlc_msat UNNEEDED, u8 **channel_update UNNEEDED)
{ fprintf(stderr, "fromwire_amount_below_minimum called!\n"); abort(); }
/* Generated stub for fromwire_expiry_too_soon */
bool fromwire_expiry_too_soon(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **channel_update UNNEEDED)
{ fprintf(stderr, "fromwire_expiry_too_soon called!\n"); abort(); }
/* Generated stub for fromwire_fee_insufficient */
bool fromwire_fee_insufficient(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct amount_msat *htlc_msat UNNEEDED, u8 **channel_update UNNEEDED)
{ fprintf(stderr, "fromwire_fee_insufficient called!\n"); abort(); }
/* Generated stub for fromwire_gossipctl_init */
bool fromwire_gossipctl_init(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct node_id *id UNNEEDED, u8 **globalfeatures UNNEEDED, u8 rgb[3] UNNEEDED, u8 alias[32] UNNEEDED, struct wireaddr **announcable UNNEEDED, u32 **dev_gossip_time UNNEEDED, bool *dev_fast_gossip UNNEEDED)
{ fprintf(stderr, "fromwire_gossipctl_init called!\n"); abort(); }
/* Generated stub for fromwire_gossip_dev_set_max_scids_encode_size */
bool fromwire_gossip_dev_set_max_scids_encode_size(const void *p UNNEEDED, u32 *max UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_dev_set_max_scids_encode_size called!\n"); abort(); }
/* Generated stub for fromwire_gossip_dev_set_time */
bool fromwire_gossip_dev_set_time(const void *p UNNEEDED, u32 *dev_gossip_time UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_dev_set_time called!\n"); abort(); }
/* Generated stub for fromwire_gossip_dev_suppress */
bool fromwire_gossip_dev_suppress(const void *p UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_dev_suppress called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_get_update */
bool fromwire_gossipd_get_update(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_get_update called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_local_channel_update */
bool fromwire_gossipd_local_channel_update(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, bool *disable UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, struct amount_msat *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED, struct amount_msat *htlc_maximum_msat UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_local_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_addrs */
bool fromwire_gossip_get_addrs(const void *p UNNEEDED, struct node_id *id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_addrs called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_channel_peer */
bool fromwire_gossip_get_channel_peer(const void *p UNNEEDED, struct short_channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_channel_peer called!\n"); abort(); }
/* Generated stub for fromwire_gossip_getchannels_request */
bool fromwire_gossip_getchannels_request(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct short_channel_id **short_channel_id UNNEEDED, struct node_id **source UNNEEDED, struct short_channel_id **prev UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_getchannels_request called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_incoming_channels */
bool fromwire_gossip_get_incoming_channels(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, bool **private_too UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_incoming_channels called!\n"); abort(); }
/* Generated stub for fromwire_gossip_getnodes_request */
bool fromwire_gossip_getnodes_request(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id **id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_getnodes_request called!\n"); abort(); }
/* Generated stub for fromwire_gossip_getroute_request */
bool fromwire_gossip_getroute_request(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id **source UNNEEDED, struct node_id *destination UNNEEDED, struct amount_msat *msatoshi UNNEEDED, u64 *riskfactor_by_million UNNEEDED, u32 *final_cltv UNNEEDED, double *fuzz UNNEEDED, struct exclude_entry ***excluded UNNEEDED, u32 *max_hops UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_getroute_request called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_txout_reply */
bool fromwire_gossip_get_txout_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct amount_sat *satoshis UNNEEDED, u8 **outscript UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_txout_reply called!\n"); abort(); }
/* Generated stub for fromwire_gossip_local_channel_close */
bool fromwire_gossip_local_channel_close(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_local_channel_close called!\n"); abort(); }
/* Generated stub for fromwire_gossip_new_peer */
bool fromwire_gossip_new_peer(const void *p UNNEEDED, struct node_id *id UNNEEDED, bool *gossip_queries_feature UNNEEDED, bool *initial_routing_sync UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_new_peer called!\n"); abort(); }
/* Generated stub for fromwire_gossip_outpoint_spent */
bool fromwire_gossip_outpoint_spent(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_outpoint_spent called!\n"); abort(); }
/* Generated stub for fromwire_gossip_payment_failure */
bool fromwire_gossip_payment_failure(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id *erring_node UNNEEDED, struct short_channel_id *erring_channel UNNEEDED, u8 *erring_channel_direction UNNEEDED, u8 **error UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_payment_failure called!\n"); abort(); }
/* Generated stub for fromwire_gossip_ping */
bool fromwire_gossip_ping(const void *p UNNEEDED, struct node_id *id UNNEEDED, u16 *num_pong_bytes UNNEEDED, u16 *len UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_ping called!\n"); abort(); }
/* Generated stub for fromwire_gossip_query_channel_range */
bool fromwire_gossip_query_channel_range(const void *p UNNEEDED, struct node_id *id UNNEEDED, u32 *first_blocknum UNNEEDED, u32 *number_of_blocks UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_query_channel_range called!\n"); abort(); }
/* Generated stub for fromwire_gossip_query_scids */
bool fromwire_gossip_query_scids(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id *id UNNEEDED, struct short_channel_id **ids UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_query_scids called!\n"); abort(); }
/* Generated stub for fromwire_gossip_send_timestamp_filter */
bool fromwire_gossip_send_timestamp_filter(const void *p UNNEEDED, struct node_id *id UNNEEDED, u32 *first_timestamp UNNEEDED, u32 *timestamp_range UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_send_timestamp_filter called!\n"); abort(); }
/* Generated stub for fromwire_hsm_cupdate_sig_reply */
bool fromwire_hsm_cupdate_sig_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **cu UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_cupdate_sig_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_node_announcement_sig_reply */
bool fromwire_hsm_node_announcement_sig_reply(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_node_announcement_sig_reply called!\n"); abort(); }
/* Generated stub for fromwire_incorrect_cltv_expiry */
bool fromwire_incorrect_cltv_expiry(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u32 *cltv_expiry UNNEEDED, u8 **channel_update UNNEEDED)
{ fprintf(stderr, "fromwire_incorrect_cltv_expiry called!\n"); abort(); }
/* Generated stub for fromwire_temporary_channel_failure */
bool fromwire_temporary_channel_failure(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **channel_update UNNEEDED)
{ fprintf(stderr, "fromwire_temporary_channel_failure called!\n"); abort(); }
/* Generated stub for get_node */
struct node *get_node(struct routing_state *rstate UNNEEDED,
		      const struct node_id *id UNNEEDED)
{ fprintf(stderr, "get_node called!\n"); abort(); }
/* Generated stub for get_route */
struct route_hop *get_route(const tal_t *ctx UNNEEDED, struct routing_state *rstate UNNEEDED,
			    const struct node_id *source UNNEEDED,
			    const struct node_id *destination UNNEEDED,
			    const struct amount_msat msat UNNEEDED, double riskfactor UNNEEDED,
			    u32 final_cltv UNNEEDED,
			    double fuzz UNNEEDED,
			    u64 seed UNNEEDED,
			    struct exclude_entry **excluded UNNEEDED,
			    u32 max_hops UNNEEDED)
{ fprintf(stderr, "get_route called!\n"); abort(); }
/* Generated stub for gossip_peerd_wire_type_name */
const char *gossip_peerd_wire_type_name(int e UNNEEDED)
{ fprintf(stderr, "gossip_peerd_wire_type_name called!\n"); abort(); }
/* Generated stub for gossip_store_compact */
bool gossip_store_compact(struct gossip_store *gs UNNEEDED)
{ fprintf(stderr, "gossip_store_compact called!\n"); abort(); }
/* Generated stub for gossip_store_get */
const u8 *gossip_store_get(const tal_t *ctx UNNEEDED,
			   struct gossip_store *gs UNNEEDED,
			   u64 offset UNNEEDED)
{ fprintf(stderr, "gossip_store_get called!\n"); abort(); }
/* Generated stub for gossip_store_load */
bool gossip_store_load(struct routing_state *rstate UNNEEDED, struct gossip_store *gs UNNEEDED)
{ fprintf(stderr, "gossip_store_load called!\n"); abort(); }
/* Generated stub for gossip_store_readonly_fd */
int gossip_store_readonly_fd(struct gossip_store *gs UNNEEDED)
{ fprintf(stderr, "gossip_store_readonly_fd called!\n"); abort(); }
/* Generated stub for gossip_time_now */
struct timeabs gossip_time_now(const struct routing_state *rstate UNNEEDED)
{ fprintf(stderr, "gossip_time_now called!\n"); abort(); }
/* Generated stub for got_pong */
const char *got_pong(const u8 *pong UNNEEDED, size_t *num_pings_outstanding UNNEEDED)
{ fprintf(stderr, "got_pong called!\n"); abort(); }
/* Generated stub for handle_channel_announcement */
u8 *handle_channel_announcement(struct routing_state *rstate UNNEEDED,
				const u8 *announce TAKES UNNEEDED,
				const struct short_channel_id **scid UNNEEDED)
{ fprintf(stderr, "handle_channel_announcement called!\n"); abort(); }
/* Generated stub for handle_channel_update */
u8 *handle_channel_update(struct routing_state *rstate UNNEEDED, const u8 *update TAKES UNNEEDED,
			  const char *source UNNEEDED,
			  struct short_channel_id *unknown_scid UNNEEDED)
{ fprintf(stderr, "handle_channel_update called!\n"); abort(); }
/* Generated stub for handle_local_add_channel */
bool handle_local_add_channel(struct routing_state *rstate UNNEEDED, const u8 *msg UNNEEDED,
			      u64 index UNNEEDED)
{ fprintf(stderr, "handle_local_add_channel called!\n"); abort(); }
/* Generated stub for handle_node_announcement */
u8 *handle_node_announcement(struct routing_state *rstate UNNEEDED, const u8 *node UNNEEDED)
{ fprintf(stderr, "handle_node_announcement called!\n"); abort(); }
/* Generated stub for handle_pending_cannouncement */
bool handle_pending_cannouncement(struct routing_state *rstate UNNEEDED,
				  const struct short_channel_id *scid UNNEEDED,
				  const struct amount_sat sat UNNEEDED,
				  const u8 *txscript UNNEEDED)
{ fprintf(stderr, "handle_pending_cannouncement called!\n"); abort(); }
/* Generated stub for make_ping */
u8 *make_ping(const tal_t *ctx UNNEEDED, u16 num_pong_bytes UNNEEDED, u16 padlen UNNEEDED)
{ fprintf(stderr, "make_ping called!\n"); abort(); }
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for memleak_enter_allocations */
struct htable *memleak_enter_allocations(const tal_t *ctx UNNEEDED,
					 const void *exclude1 UNNEEDED,
					 const void *exclude2 UNNEEDED)
{ fprintf(stderr, "memleak_enter_allocations called!\n"); abort(); }
/* Generated stub for memleak_remove_referenced */
void memleak_remove_referenced(struct htable *memtable UNNEEDED, const void *root UNNEEDED)
{ fprintf(stderr, "memleak_remove_referenced called!\n"); abort(); }
/* Generated stub for new_reltimer_ */
struct oneshot *new_reltimer_(struct timers *timers UNNEEDED,
			      const tal_t *ctx UNNEEDED,
			      struct timerel expire UNNEEDED,
			      void (*cb)(void *) UNNEEDED, void *arg UNNEEDED)
{ fprintf(stderr, "new_reltimer_ called!\n"); abort(); }
/* Generated stub for new_routing_state */
struct routing_state *new_routing_state(const tal_t *ctx UNNEEDED,
					const struct chainparams *chainparams UNNEEDED,
					const struct node_id *local_id UNNEEDED,
					struct list_head *peers UNNEEDED,
					const u32 *dev_gossip_time TAKES UNNEEDED,
					bool dev_fast_gossip UNNEEDED)
{ fprintf(stderr, "new_routing_state called!\n"); abort(); }
/* Generated stub for next_chan */
struct chan *next_chan(const struct node *node UNNEEDED, struct chan_map_iter *i UNNEEDED)
{ fprintf(stderr, "next_chan called!\n"); abort(); }
/* Generated stub for notleak_ */
void *notleak_(const void *ptr UNNEEDED, bool plus_children UNNEEDED)
{ fprintf(stderr, "notleak_ called!\n"); abort(); }
/* Generated stub for read_addresses */
struct wireaddr *read_addresses(const tal_t *ctx UNNEEDED, const u8 *ser UNNEEDED)
{ fprintf(stderr, "read_addresses called!\n"); abort(); }
/* Generated stub for remove_channel_from_store */
void remove_channel_from_store(struct routing_state *rstate UNNEEDED,
			       struct chan *chan UNNEEDED)
{ fprintf(stderr, "remove_channel_from_store called!\n"); abort(); }
/* Generated stub for route_prune */
void route_prune(struct routing_state *rstate UNNEEDED)
{ fprintf(stderr, "route_prune called!\n"); abort(); }
/* Generated stub for routing_failure */
void routing_failure(struct routing_state *rstate UNNEEDED,
		     const struct node_id *erring_node UNNEEDED,
		     const struct short_channel_id *erring_channel UNNEEDED,
		     int erring_direction UNNEEDED,
		     enum onion_type failcode UNNEEDED,
		     const u8 *channel_update UNNEEDED)
{ fprintf(stderr, "routing_failure called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for status_fmt */
void status_fmt(enum log_level level UNNEEDED, const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "status_fmt called!\n"); abort(); }
/* Generated stub for status_setup_async */
void status_setup_async(struct daemon_conn *master UNNEEDED)
{ fprintf(stderr, "status_setup_async called!\n"); abort(); }
/* Generated stub for subdaemon_setup */
void subdaemon_setup(int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "subdaemon_setup called!\n"); abort(); }
/* Generated stub for timer_expired */
void timer_expired(tal_t *ctx UNNEEDED, struct timer *timer UNNEEDED)
{ fprintf(stderr, "timer_expired called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_dev_compact_store_reply */
u8 *towire_gossip_dev_compact_store_reply(const tal_t *ctx UNNEEDED, bool success UNNEEDED)
{ fprintf(stderr, "towire_gossip_dev_compact_store_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_dev_memleak_reply */
u8 *towire_gossip_dev_memleak_reply(const tal_t *ctx UNNEEDED, bool leak UNNEEDED)
{ fprintf(stderr, "towire_gossip_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for towire_gossipd_get_update_reply */
u8 *towire_gossipd_get_update_reply(const tal_t *ctx UNNEEDED, const u8 *update UNNEEDED)
{ fprintf(stderr, "towire_gossipd_get_update_reply called!\n"); abort(); }
/* Generated stub for towire_gossipd_new_store_fd */
u8 *towire_gossipd_new_store_fd(const tal_t *ctx UNNEEDED, u64 offset_shorter UNNEEDED)
{ fprintf(stderr, "towire_gossipd_new_store_fd called!\n"); abort(); }
/* Generated stub for towire_gossip_get_addrs_reply */
u8 *towire_gossip_get_addrs_reply(const tal_t *ctx UNNEEDED, const struct wireaddr *addrs UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_addrs_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_get_channel_peer_reply */
u8 *towire_gossip_get_channel_peer_reply(const tal_t *ctx UNNEEDED, const struct node_id *peer_id UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_channel_peer_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_getchannels_reply */
u8 *towire_gossip_getchannels_reply(const tal_t *ctx UNNEEDED, bool complete UNNEEDED, const struct gossip_getchannels_entry **nodes UNNEEDED)
{ fprintf(stderr, "towire_gossip_getchannels_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_get_incoming_channels_reply */
u8 *towire_gossip_get_incoming_channels_reply(const tal_t *ctx UNNEEDED, const struct route_info *route_info UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_incoming_channels_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_getnodes_reply */
u8 *towire_gossip_getnodes_reply(const tal_t *ctx UNNEEDED, const struct gossip_getnodes_entry **nodes UNNEEDED)
{ fprintf(stderr, "towire_gossip_getnodes_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_getroute_reply */
u8 *towire_gossip_getroute_reply(const tal_t *ctx UNNEEDED, const struct route_hop *hops UNNEEDED)
{ fprintf(stderr, "towire_gossip_getroute_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_get_txout */
u8 *towire_gossip_get_txout(const tal_t *ctx UNNEEDED, const struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_txout called!\n"); abort(); }
/* Generated stub for towire_gossip_new_peer_reply */
u8 *towire_gossip_new_peer_reply(const tal_t *ctx UNNEEDED, bool success UNNEEDED, const struct gossip_state *gs UNNEEDED)
{ fprintf(stderr, "towire_gossip_new_peer_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_ping_reply */
u8 *towire_gossip_ping_reply(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED, bool sent UNNEEDED, u16 totlen UNNEEDED)
{ fprintf(stderr, "towire_gossip_ping_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_query_channel_range_reply */
u8 *towire_gossip_query_channel_range_reply(const tal_t *ctx UNNEEDED, u32 final_first_block UNNEEDED, u32 final_num_blocks UNNEEDED, bool final_complete UNNEEDED, const struct short_channel_id *scids UNNEEDED)
{ fprintf(stderr, "towire_gossip_query_channel_range_reply called!\n"); abort(); }
/* Generated stub for towire_gossip_scids_reply */
u8 *towire_gossip_scids_reply(const tal_t *ctx UNNEEDED, bool ok UNNEEDED, bool complete UNNEEDED)
{ fprintf(stderr, "towire_gossip_scids_reply called!\n"); abort(); }
/* Generated stub for towire_hsm_cupdate_sig_req */
u8 *towire_hsm_cupdate_sig_req(const tal_t *ctx UNNEEDED, const u8 *cu UNNEEDED)
{ fprintf(stderr, "towire_hsm_cupdate_sig_req called!\n"); abort(); }
/* Generated stub for towire_hsm_node_announcement_sig_req */
u8 *towire_hsm_node_announcement_sig_req(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED)
{ fprintf(stderr, "towire_hsm_node_announcement_sig_req called!\n"); abort(); }
/* Generated stub for towire_wireaddr */
void towire_wireaddr(u8 **pptr UNNEEDED, const struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "towire_wireaddr called!\n"); abort(); }
/* Generated stub for wire_sync_read */
u8 *wire_sync_read(const tal_t *ctx UNNEEDED, int fd UNNEEDED)
{ fprintf(stderr, "wire_sync_read called!\n"); abort(); }
/* Generated stub for wire_sync_write */
bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES UNNEEDED)
{ fprintf(stderr, "wire_sync_write called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(void)
{
	u8 *update;
	setup_locale();

	update = tal_hexdata(NULL, "010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a",
			     strlen("010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a"));
	assert(crc32_of_update(update) == 0x1112fa30);
	tal_free(update);

	update = tal_hexdata(NULL, "010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0",
			     strlen("010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0"));
	assert(crc32_of_update(update) == 0xf32ce968);
	tal_free(update);
	return 0;
}
