# 1 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "AsyncCallbacks.c" 1
 
 
 
int Poll_0_RequestCB()
{
	 

	 
	 

	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

# 9 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 10 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"248b8b73a9494f1aa4942e11b23c3dbd\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 11 "globals.h" 2


 
 


# 3 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("422");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.5");

	web_url("www.tastynibbles.in", 
		"URL=https://www.tastynibbles.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=c3935b61-7c01-4ecf-a28b-9c8f97f0d14f; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_s=3a551aaf-aece-4bcb-ab98-7a1ffd6210e9; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A02%3A51.016Z; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_p=; DOMAIN=www.tastynibbles.in");

	web_url("modern", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660970997},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708660970997}}]}", 
		"LAST");

	web_custom_request("produce_batch_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660971016},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\""
		":\"home\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d42160f8-5F88-40FA-D07B-4B0273F3CFBF\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708660971016}"
		"}]}", 
		"LAST");

	web_custom_request("produce_batch_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660971529},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708660970982}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708660970984}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\"},\"metadata\":{\"event_created_at_ms\":1708660970985}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\""
		"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\"},\"metadata\":{\"event_created_at_ms\":1708660971213}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id"
		"\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":229,\"start_time\":2807,\"session_id\":\"c3cba3ec-c601-4412-a305-27ff9673c789\"},\"metadata\":{\"event_created_at_ms\":1708660971214}}]}", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{},\"use_webpush\":true}", 
		"IsBinary=0", 
		"LAST");

	 

	web_custom_request("produce_batch_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660971017},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708660970997}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\"},\"metadata\":{\"event_created_at_ms\":1708660971016}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708660971016}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708660971016}}]}", 
		"LAST");

	web_custom_request("produce_batch_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660971017},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\",\"referrer\":\"\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708660971016,\"event_source_url\":\"https://www.tastynibbles.in/\",\"unique_token\":\""
		"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d42160f8-5F88-40FA-D07B-4B0273F3CFBF\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\""
		",\"session_id\":\"sh-d421611f-AF09-45A3-9A14-EED39853BC8A\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708660971017}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.0.1708660977.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga=GA1.1.1281374422.1708660978; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.0.1708660979.0.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_gcl_au=1.1.1793844992.1708660979; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_6", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708660979938},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\","
		"\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\"},\"metadata\":{\"event_created_at_ms\":1708660979425}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP"
		"\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":8441,\"start_time\":2807,\"session_id\":\"c3cba3ec-c601-4412-a305-27ff9673c789\"},\"metadata\":{\"event_created_at_ms\":1708660979426}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\""
		"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\""
		"standard\",\"event_id\":\"sh-d42160de-6FDC-4748-4519-5041B10EC1B7\"},\"metadata\":{\"event_created_at_ms\":1708660979882}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\","
		"\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":8899,\"start_time\":2807,\"session_id\":\"c3cba3ec-c601-4412-a305-27ff9673c789\"},\"metadata\":{\"event_created_at_ms\":1708660979883}}]}", 
		"LAST");

	web_url("cart", 
		"URL=https://www.tastynibbles.in/cart?t=1708660980265&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=2eccf581-6540-4a91-adc5-cd3ec7f57c7a; DOMAIN=www.tastynibbles.in");

	web_url("wbanner", 
		"URL=https://www.tastynibbles.in/apps/discos/wbanner?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("location_status", 
		"URL=https://www.tastynibbles.in/apps/discos/location_status?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("track", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJMeHhudW1zSTM3RyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2Mj"
		"EwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYwOTgwMjg4LCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_custom_request("track_2", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJMeHhudW1zSTM3RyIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2Mj"
		"EwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYwOTgxMjk2LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_submit_data("configs", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("products.json", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_2", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_3", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=session_token",
		"RegExp=session_token=(.*?)\\\r\\\n",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/public*",
		"LAST");

	web_url("public", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("configs_2",
		"URL=https://api.razorpay.com/v1/magic/analytics/configs?key_id=rzp_live_UiTUCACnTlsjdB",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token={session_token}",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"LAST");

	web_url("preferences",
		"URL=https://api.razorpay.com/v1/standard_checkout/preferences?session_token={session_token}&currency%5B0%5D=INR&_%5Bpreference_source%5D=checkout_frame_standard_lite&_%5Bbuild%5D=7974256659&_%5Blibrary%5D=checkoutjs&_%5Bplatform%5D=browser&qr_required=true&key_id=rzp_live_UiTUCACnTlsjdB",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token={session_token}",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"LAST");

	 

	web_url("account", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=115f9b46-78bc-417e-ab09-bd277707fd92; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661012.25.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661012.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_7", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661012563},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"c3cba3ec-c601-4412-a305-27ff9673c789\",\"run_time_duration\":9398,\"start_time\":2308,\"page_duration"
		"\":42078},\"metadata\":{\"event_created_at_ms\":1708661012563}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A03%3A33.029Z; DOMAIN=www.tastynibbles.in");

	web_url("login", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account/login?return_url=%2Faccount", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_8", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661013021},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661013021}}]}", 
		"LAST");

	web_custom_request("produce_batch_9", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661013028},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/login\",\"search\":\"?return_url=%2Faccount\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"properties\":{},\"eventId\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\",\"s2sMetadata\":{\"navigationApi\""
		":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d421ffdc-5296-4D6F-C2D4-8AA5804F7201\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\""
		"page\"},\"metadata\":{\"event_created_at_ms\":1708661013028}}]}", 
		"LAST");

	web_custom_request("produce_batch_10", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661013032},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/login\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661013032,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/login?return_url=%2Faccount\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d421ffdc-5296-4D6F-C2D4-8AA5804F7201\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\""
		"is_persistent_cookie\":true,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d421fff2-5586-4D7A-F677-46DCAEBB3060\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661013032}}]}", 
		"LAST");

	web_custom_request("produce_batch_11", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661013033},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661013021}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\"},\"metadata\":{\"event_created_at_ms\":1708661013029}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/login?return_url=%2Faccount\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\""
		"location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661013029}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\""
		"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/login\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661013032}}]}", 
		"LAST");

	web_custom_request("track_3", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQk1ZOU8waTh4NjNDIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6IjNhNTUxYWFmLWFlY2UtNGJjYi1hYjk4LTdhMWZmZDYyMTBlOSJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTpjb25maWciLCJ0aW1lc3RhbXAiOjE3MDg2NjEwMTM0NDAsInByb3BlcnRpZXMiOnsiZGF0YSI6eyJtZXJjaGFudF9rZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsInNob3VsZFVzZVNob3BJZCI6ZmFsc2UsImdUYWdJZCI6IiIsImd0YWdMYWJlbCI6IiIsInJhem9ycGF5TWFnaWNCdG5Db25maWciOnt9LCJjaGVja291dE9wdGlvbnMiOnsibmFtZSI6IiJ9LCJjYXJ0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNo"
		"ZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJwcm9kdWN0Q29uZmlnIjp7InN0YXR1cyI6InRlc3QiLCJjdXN0b21TZWxlY3RvciI6IiIsImVuYWJsZU1hZ2ljQnRuIjpmYWxzZSwiZW5hYmxlTmF0aXZlU2hvcGlmeUNoZWNrYm94IjpmYWxzZSwiZHVhbCI6ZmFsc2V9LCJjdXN0b21Dc3MiOiIifX19XX0%3D\"}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661013.24.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_2", 
		"URL=https://www.tastynibbles.in/cart?t=1708661013422&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661013.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_12", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661013579},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661012983}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":"
		"\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661012984}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\"},\"metadata\":{\"event_created_at_ms\":1708661012986}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\"},\"metadata\":{\"event_created_at_ms\":1708661013135}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\""
		"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\""
		":\"modern\",\"error_msg\":\"N/A\",\"duration\":148,\"start_time\":1437,\"session_id\":\"f2cd8a12-7232-4cb5-b167-754eef55f828\"},\"metadata\":{\"event_created_at_ms\":1708661013136}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\""
		"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\"},\"metadata\":{\"event_created_at_ms\":1708661013157}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\""
		"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\""
		",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":171,\"start_time\":1436,\"session_id\":\"f2cd8a12-7232-4cb5-b167-754eef55f828\"},\"metadata\":{\"event_created_at_ms\":1708661013157}}]}", 
		"LAST");

	web_add_cookie("keep_alive=6da7604d-8ed2-4a3c-a317-3db1db13d83a; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_13", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661014089},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\""
		"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d421ff94-CD93-41D9-2B46-C18C5991072D\"},\"metadata\":{\"event_created_at_ms\":1708661013582}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\""
		"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":595,\"start_time\":1437,\"session_id\":\"f2cd8a12-7232-4cb5-b167-754eef55f828\"},\"metadata\":{\"event_created_at_ms\":1708661013582}}]}", 
		"LAST");

	web_custom_request("track_4", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9sb2dpbj9yZXR1cm5fdXJsPSUyRmFjY291bnQiLCJsaWIiOiJtYWdpYy1wbHVnaW5zIiwiYnVpbGQiOjgwMDU2Nzg0MDAsInNoYSI6ImY2OTNjMDMzM2YxNTRlOWNlZTg3ZTBkMjE0YTg5NGQ0YjEwMTAzZGQiLCJrZXkiOiJyenBfbGl2ZV9VaVRVQ0FDblRsc2pkQiIsIm1hZ2ljX3BsdWdpbl9pZCI6Ik5lQk1ZOU8waTh4NjNDIiwiY2hlY2tvdXRTcmMiOiJwcm9kdWN0aW9uIiwiaXNEZXByZWNhdGVNb2RlIjpmYWxzZSwic2hvcGlmeVNlc3Npb25Ub2tlbi"
		"I6IjNhNTUxYWFmLWFlY2UtNGJjYi1hYjk4LTdhMWZmZDYyMTBlOSJ9LCJldmVudHMiOlt7ImV2ZW50IjoibWFnaWNfc2hvcGlmeTptYWdpY19zZGtfaW5qZWN0ZWQiLCJ0aW1lc3RhbXAiOjE3MDg2NjEwMTQ0NDUsInByb3BlcnRpZXMiOnsicmVhc29uIjoiZG9tIn19XX0%3D\"}", 
		"LAST");

	web_url("public_2", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_3", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("products.json_4", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_5", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_6", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661013166,\"server_timing\":\"{\\\"processing\\\":[296,\\\"\\\"],\\\"db\\\":[128,\\\"\\\"],\\\"render\\\":[62,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/login\\\"],\\\"servedBy\\\":[0,\\\"gnrs\\\"],\\\"requestID\\\":[0,\\\""
		"45352742-f697-4753-91ce-b366b82d9742\\\"],\\\"cfRequestDuration\\\":[562.000036,\\\"\\\"]}\",\"session_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":2027,\"visually_ready\":2030,\"first_contentful_paint\":1429,\"navigation_start\":1708661011542,\"redirect_end\":1708661011921,\""
		"fetch_start\":1708661011922,\"domain_lookup_start\":1708661011922,\"domain_lookup_end\":1708661011922,\"connect_start\":1708661011922,\"connect_end\":1708661011922,\"request_start\":1708661011948,\"response_start\":1708661012546,\"response_end\":1708661012546,\"dom_loading\":1708661012553,\"dom_interactive\":1708661013388,\"dom_content_loaded_event_start\":1708661013450,\"dom_content_loaded_event_end\":1708661013453,\"dom_complete\":1708661015369,\"load_event_start\":1708661015369,\""
		"load_event_end\":1708661015373,\"secure_connection_start\":1708661011922,\"encoded_body_size\":90214,\"decoded_body_size\":377161,\"transfer_size\":93446,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":1,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3y6,2s,2r*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"312z,3a,3a*19rw,_,iej*23\\\"},"
		"\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"310u,1x,1q*118cm,_,3kah*22\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"314w*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"328f,1z*25\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2tj,33,32*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3tl,5j,5i*1woh,_,"
		"1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3y2,27,26*17mf,_,m90*20\\\"},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3tk,4m,4m*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3tk,53,52*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\""
		":\\\"310z,3q,3p*1294,_,456*21\\\"},\\\"themes_support/shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3tl,8b,88,71*1jj,11f,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"310y,2x,2x*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"310w,25,25*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3tj,70,70,4g*1su,oa,"
		"1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3y7*21\\\",\\\"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"314y,5i*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"31ct,26*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"31cv,2q*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3150,6e*21\\\"},\\\".com/pagead/1p-conversion/378882101/?...\\\":\\\"31ip,r5,r5,o3,nx,nx,nx,nx,nu,mq*11r,iq,-k*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?"
		"permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3tj,41,40*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"317l,5x*26\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"317s,ua,u9*1q9o,_,1cuu*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"317t,6p,6p*1nxp,_,193r*24\\\"},\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"11iq\\\"}}\",\"url\":\"https://www.tastynibbles.in/account/login?return_url="
		"%2Faccount\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661013129,\"event_sent_at_ms\":1708661015397}}", 
		"LAST");

	web_url("register", 
		"URL=https://www.tastynibbles.in/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=7d83fe62-e963-4711-b3da-6be1518106af; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661026.11.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661026.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_14", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661026393},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/login?return_url=%2Faccount\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"f2cd8a12-7232-4cb5-b167-754eef55f828\",\"run_time_duration\":704,\""
		"start_time\":1328,\"page_duration\":13514},\"metadata\":{\"event_created_at_ms\":1708661026393}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A03%3A46.926Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_15", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661026900},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661026900}}]}", 
		"LAST");

	web_url("register_2", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_16", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661026926},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account/register\",\"search\":\"\",\"title\":\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account/register\",\"properties\":{},\"eventId\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\""
		",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d4223449-837E-4CAE-B676-31FC8C7454F8\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708661026926}}]}", 
		"LAST");

	web_custom_request("produce_batch_17", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661026928},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account/register\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661026928,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d4223449-837E-4CAE-B676-31FC8C7454F8\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\""
		"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d4223480-B28A-4622-DCBF-16A395F38D5F\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661026928}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=deleted; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_18", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661026928},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661026900}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\","
		"\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\"},\"metadata\":{\"event_created_at_ms\":1708661026926}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\""
		"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account/register\\\\\",\\\\\"title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},"
		"\"metadata\":{\"event_created_at_ms\":1708661026926}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/"
		"y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account/register\\\\\",\\\\\"page_title\\\\\":\\\\\"Create Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account/register\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661026927}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661027.10.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_19", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661027371},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661026859}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661026860}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type"
		"\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\"},\"metadata\":{\"event_created_at_ms\":1708661026863}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\""
		"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\"},\"metadata\":{\"event_created_at_ms\":1708661027005}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/"
		"register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":141,\"start_time\":977,\"session_id\":\""
		"478823f5-c51e-4d71-a5ed-cc0af9c4dbe1\"},\"metadata\":{\"event_created_at_ms\":1708661027005}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\""
		"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\"},\"metadata\":{\"event_created_at_ms\":1708661027011}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":148,\"start_time\":976,\"session_id\":\""
		"478823f5-c51e-4d71-a5ed-cc0af9c4dbe1\"},\"metadata\":{\"event_created_at_ms\":1708661027019}}]}", 
		"LAST");

	web_custom_request("track_5", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCTW5iWVVxRzMyblIiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiM2E1NTFhYWYtYWVjZS00Ym"
		"NiLWFiOTgtN2ExZmZkNjIxMGU5In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2MTAyNzU5OCwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFs"
		"IjpmYWxzZX0sInByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661027.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_3", 
		"URL=https://www.tastynibbles.in/cart?t=1708661027577&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_4", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=customer_info", "Value=null", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("track_6", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudC9yZWdpc3RlciIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCTW5iWVVxRzMyblIiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiM2E1NTFhYWYtYWVjZS00Ym"
		"NiLWFiOTgtN2ExZmZkNjIxMGU5In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2MTAyODYwNiwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		"LAST");

	web_url("public_3", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=2ecb7bfd-614e-43b5-b53d-98fa81c9e516; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_20", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661028152},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\""
		"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42233fb-8C90-4F9E-3389-F60421ECC596\"},\"metadata\":{\"event_created_at_ms\":1708661027652}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\""
		"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":788,\"start_time\":977,\"session_id\":\"478823f5-c51e-4d71-a5ed-cc0af9c4dbe1\"},\"metadata\":{\"event_created_at_ms\":1708661027652}}]}", 
		"LAST");

	web_custom_request("produce_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661027268,\"server_timing\":\"{\\\"processing\\\":[165,\\\"\\\"],\\\"db\\\":[52,\\\"\\\"],\\\"render\\\":[40,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/register\\\"],\\\"servedBy\\\":[0,\\\"6vfb\\\"],\\\"requestID\\\":[0,\\\""
		"43f0335a-570a-4893-8aa6-0dbe6df51a0b\\\"],\\\"cfRequestDuration\\\":[434.000015,\\\"\\\"]}\",\"session_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":1009,\"visually_ready\":1716,\"first_contentful_paint\":936,\"navigation_start\":1708661025886,\"fetch_start\":1708661025890,\""
		"domain_lookup_start\":1708661025890,\"domain_lookup_end\":1708661025890,\"connect_start\":1708661025890,\"connect_end\":1708661025890,\"request_start\":1708661025918,\"response_start\":1708661026381,\"response_end\":1708661026381,\"dom_loading\":1708661026419,\"dom_interactive\":1708661027530,\"dom_content_loaded_event_start\":1708661027601,\"dom_content_loaded_event_end\":1708661027602,\"dom_complete\":1708661030858,\"load_event_start\":1708661030858,\"load_event_end\":1708661030862,\""
		"secure_connection_start\":1708661025890,\"encoded_body_size\":89626,\"decoded_body_size\":375012,\"transfer_size\":92544,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3kv,1z,1z*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3mx,z,y*19rw,_,iej*23\\\"},\\\"extensions/"
		"7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"3og,11,y*118cm,_,3kah*22\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3su*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"323j,178*25\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2ew,3o,3o*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3ey,6d,6d*1woh,_,1vil*22\\\",\\\""
		"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3kt,1h,1h*17mf,_,m90*20\\\"},\\\"ifycloud/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3ey,51,51*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3ey,5l,5l*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3oj,3f,"
		"3e*1294,_,456*21\\\"},\\\"themes_support/shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3ez,6u,6u*1jj,_,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3oj,23,23*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3oi,1p,1p*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ew,bs,bb,9a*1su,oi,1yt*21\\\"},\\\"clarity.ms"
		"/tag/997scejv0n\\\":\\\"3kw*21\\\",\\\"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3su,42*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3107,5m*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3107,5m*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3sv,59*21\\\"},\\\".com/pagead/1p-conversion/378882101/?...\\\":\\\"3192,2dp,2dp,2bt,l1,l1,l1,l1,l1,l0*11r,iq,-k*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain="
		"tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ew,4n,4n*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3vw,6r*26\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3vy,si,sf*1q9o,_,1cuu*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"3w6,9n,95*1nxp,_,193r*24\\\"},\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"118u\\\"}}\",\"url\":\"https://www.tastynibbles.in/account/register\",\"referrer\":\"https://"
		"www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661027067,\"event_sent_at_ms\":1708661030874}}", 
		"LAST");

	 

	web_add_cookie("_gcl_au=1.1.1793844992.1708660979.899084075.1708661100.1708661099; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_storefront_u=eyJfcmFpbHMiOnsibWVzc2FnZSI6IkJBaDdCem9KZEhsd1pWc0dTU0lVWTNWemRHOXRaWEpmWTNKbFlYUmxCam9HUlZRNkVHaGhjSEJsYm1Wa1gyRjBaaGN4TnpBNE5qWXhNVEF4TGpJeE1qazFNemc9IiwiZXhwIjoiMjAyNC0wMi0yM1QwNDowNjowMS4yMTJaIiwicHVyIjoiY29va2llLl9zdG9yZWZyb250X3UifX0%3D--e21890fd373fd7fa18f28201fed000ac3742a8df; DOMAIN=www.tastynibbles.in");

	web_submit_data("account_2", 
		"Action=https://www.tastynibbles.in/account", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=form_type", "Value=create_customer", "ENDITEM", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=customer[first_name]", "Value={firstname}", "ENDITEM", 
		"Name=customer[last_name]", "Value={lastname}", "ENDITEM", 
		"Name=customer[email]", "Value={email}", "ENDITEM", 
		"Name=customer[password]", "Value={password}", "ENDITEM", 
		"LAST");

	web_add_cookie("keep_alive=16e7a415-29f3-4d40-8f4f-d1cbd5b98238; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661102.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661102.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_21", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account/register", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661102240},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account/register\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"478823f5-c51e-4d71-a5ed-cc0af9c4dbe1\",\"run_time_duration\":884,\"start_time\":881,\""
		"page_duration\":75471},\"metadata\":{\"event_created_at_ms\":1708661102240}}]}", 
		"LAST");

	web_custom_request("track_7", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJPOHRLSlNTS0VNcSIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2Mj"
		"EwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYxMTAzOTAwLCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_custom_request("track_8", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJPOHRLSlNTS0VNcSIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2Mj"
		"EwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYxMTA0OTg4LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A05%3A03.492Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_22", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661103492},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account/register\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\","
		"\"navigationType\":\"navigate\"},\"pageType\":\"home\",\"customerId\":7180330008751,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d423691e-0A3D-4F73-01F1-C971F9662996\",\"microSessionCount\":1,\"isPersistentCookie\":true,\""
		"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661103492}}]}", 
		"LAST");

	web_custom_request("produce_batch_23", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661103493},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\",\"referrer\":\"https://www.tastynibbles.in/account/register\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661103493,\"event_source_url\":\"https://"
		"www.tastynibbles.in/\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d423691e-0A3D-4F73-01F1-C971F9662996\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d423696a-A928-4AE4-BA15-EFF20580E6E4\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661103493}}]}", 
		"LAST");

	web_custom_request("produce_batch_24", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661103455},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661103455}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661103.59.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_25", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661103493},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661103455}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\"},\"metadata\":{\"event_created_at_ms\":1708661103492}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661103492}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661103493}}]}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661103.0.0.0; DOMAIN=www.tastynibbles.in");

	web_submit_data("configs_5", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180330008751,\"name\":\"Brunda M\",\"email\":\"brunda123@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("public_4", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_26", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661114961},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version"
		"\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\"},\"metadata\":{\"event_created_at_ms\":1708661114447}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":11025,\"start_time\":3493,\"session_id\":\"5aa2a816-c163-47fe-b3ab-8e24c5ddc4e4\"},\"metadata\":{\"event_created_at_ms\":1708661114454}}]}", 
		"LAST");

	web_custom_request("produce_batch_27", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661104051},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661103427}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661103428}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\"},\"metadata\":{\"event_created_at_ms\":1708661103429}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\"},\"metadata\":{\"event_created_at_ms\":1708661103641}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\""
		"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":212,\"start_time\":3493,\"session_id\":"
		"\"5aa2a816-c163-47fe-b3ab-8e24c5ddc4e4\"},\"metadata\":{\"event_created_at_ms\":1708661103642}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\""
		"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42368e8-87CF-4FD3-E9E8-53D2FD8C358F\"},\"metadata\":{\"event_created_at_ms\":1708661103642}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\""
		"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":213,\"start_time\":3493,\"session_id\":\"5aa2a816-c163-47fe-b3ab-8e24c5ddc4e4\"},\"metadata\":{\"event_created_at_ms\":1708661103643}}]}", 
		"LAST");

	web_url("cart_4", 
		"URL=https://www.tastynibbles.in/cart?t=1708661103887&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_7", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_8", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products.json_9", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_cookie("keep_alive=fa8d12a0-5ccf-49f9-a028-fe813913673d; DOMAIN=www.tastynibbles.in");

	lr_think_time(21);

	web_url("account_3", 
		"URL=https://www.tastynibbles.in/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=c0c53e50-ad6d-44d0-8428-fea135f7b536; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661139.23.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661139.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_28", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661139185},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"5aa2a816-c163-47fe-b3ab-8e24c5ddc4e4\",\"run_time_duration\":11299,\"start_time\":3219,\""
		"page_duration\":36030},\"metadata\":{\"event_created_at_ms\":1708661139185}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A05%3A39.690Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_29", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661139681},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661139681}}]}", 
		"LAST");

	web_custom_request("produce_batch_30", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661139683},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/account\",\"search\":\"\",\"title\":\"Account \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/account\",\"properties\":{},\"eventId\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\""
		"navigate\"},\"customerId\":7180330008751,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d423ecdc-BD52-413D-E4B0-42B753184227\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\""
		"event_created_at_ms\":1708661139683}}]}", 
		"LAST");

	web_custom_request("track_9", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCT21TZVY5TXA5STEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiM2E1NTFhYWYtYWVjZS00YmNiLWFiOTgtN2"
		"ExZmZkNjIxMGU5In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY2MTE0MDE1MSwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0s"
		"InByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		"LAST");

	web_custom_request("produce_batch_31", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661139691},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/account\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661139691,\"event_source_url\":\"https://"
		"www.tastynibbles.in/account\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d423ecdc-BD52-413D-E4B0-42B753184227\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\""
		":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d423ecf0-F28F-4991-418F-08EA4D1A4F88\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661139691}}]}", 
		"LAST");

	web_url("account_4", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_32", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661139692},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/account\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661139681}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload"
		"\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\"},\"metadata\":{\"event_created_at_ms\":1708661139690}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\""
		":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/account\\\\\",\\\\\"title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\""
		"event_created_at_ms\":1708661139690}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\""
		"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/account\\\\\",\\\\\"page_title\\\\\":\\\\\"Account \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/account\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661139691}}]}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661140.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_5", 
		"URL=https://www.tastynibbles.in/cart?t=1708661140138&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_33", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661140161},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661139651}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in"
		"/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661139652}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked"
		"\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\"},\"metadata\":{\"event_created_at_ms\":1708661139655}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\""
		"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\"},\"metadata\":{\"event_created_at_ms\":1708661139815}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":161,\"start_time\":992,\"session_id\":\"c02cf406-322d-4fd8-8800-4737a8dd17dd\"},\"metadata\":{"
		"\"event_created_at_ms\":1708661139815}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\""
		"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\"},\"metadata\":{\"event_created_at_ms\":1708661139983}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\","
		"\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":329,\"start_time\":992,\"session_id\":\"c02cf406-322d-4fd8-8800-4737a8dd17dd\"},\"metadata\":{\"event_created_at_ms\""
		":1708661139983}}]}", 
		"LAST");

	web_add_cookie("keep_alive=1c95b442-ba21-4add-9377-df117bb63404; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_34", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661140858},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\""
		"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d423eca3-33C1-4590-6DCC-10D39AD559E8\"},\"metadata\":{\"event_created_at_ms\":1708661140338}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source"
		"\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":684,\"start_time\":992,\"session_id\":\"c02cf406-322d-4fd8-8800-4737a8dd17dd\"},\"metadata\":{\"event_created_at_ms\":1708661140339}}]}", 
		"LAST");

	web_custom_request("track_10", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vYWNjb3VudCIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVCT21TZVY5TXA5STEiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiM2E1NTFhYWYtYWVjZS00YmNiLWFiOTgtN2"
		"ExZmZkNjIxMGU5In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY2MTE0MTE1NiwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		"LAST");

	web_submit_data("configs_6", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180330008751,\"name\":\"Brunda M\",\"email\":\"brunda123@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("public_5", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661139763,\"server_timing\":\"{\\\"processing\\\":[189,\\\"\\\"],\\\"db\\\":[112,\\\"\\\"],\\\"render\\\":[62,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"customers/account\\\"],\\\"servedBy\\\":[0,\\\"7b7h\\\"],\\\"requestID\\\":[0,\\\""
		"62dd14c2-7afa-4985-8a83-1232985a476c\\\"],\\\"cfRequestDuration\\\":[449.999809,\\\"\\\"]}\",\"session_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":1511,\"visually_ready\":1511,\"first_contentful_paint\":979,\"navigation_start\":1708661138657,\"fetch_start\":1708661138658,\""
		"domain_lookup_start\":1708661138658,\"domain_lookup_end\":1708661138658,\"connect_start\":1708661138658,\"connect_end\":1708661138658,\"request_start\":1708661138688,\"response_start\":1708661139172,\"response_end\":1708661139172,\"dom_loading\":1708661139178,\"dom_interactive\":1708661140109,\"dom_content_loaded_event_start\":1708661140151,\"dom_content_loaded_event_end\":1708661140152,\"dom_complete\":1708661141024,\"load_event_start\":1708661141024,\"load_event_end\":1708661141030,\""
		"secure_connection_start\":1708661138658,\"encoded_body_size\":90181,\"decoded_body_size\":375678,\"transfer_size\":93068,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3lg,3t,3t*13ya,_*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3pv,3v,3v*19rw,_*23\\\"},\\\"extensions/"
		"7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"3lw,4q,4p*118cm,_*22\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3sc*21\\\"},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2ey,57,56*1p0z,_*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3ey,8e,8d*1woh,_*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3le,33,33*17mf,_*20\\\"},\\\"ifycloud"
		"/shopify/assets/\\\":{\\\"s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3ey,78,77*12sn,_*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3ey,7t,7s*1a2h,_*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3ot,3m,3m*1294,_*21\\\"},\\\"themes_support/"
		"shopify_common-33bb9d312118840468a53f36b59c62c1e8f2b7d1a0a77250db9e300441827470.js\\\":\\\"3ey,8z,8z*1jj,_,12f*22\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3ot,37,35*1k49,_*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3oq,2k,2j*1kyi,_*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ey,9o,9o,6h*1su,o2,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3lh*21\\\",\\\"google\\\":"
		"{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3sd,4r*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3yo,3l*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3yp,4b*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3sd,5s*21\\\"},\\\".com/\\\":{\\\"ccm/conversion/378882101/?...\\\":\\\"1134,nc\\\",\\\"pagead/1p-conversion/378882101/?...\\\":\\\"3136,qk,qi,o3,ng,ng,ng,ng,ng,ne*11r,ll,-k*21\\\"}}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain"
		"=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3ey,6c,6c*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3xt,36*26\\\",\\\"ajax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3xu,qu,qh*1q9o,_*21\\\",\\\"3.5.1/jquery.min.js\\\":\\\"3z9,4j,4i*1nxp,_*24\\\"},\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"1135\\\"}}\",\"url\":\"https://www.tastynibbles.in/account\",\"referrer\":\"https://www.tastynibbles.in/\",\""
		"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661139761,\"event_sent_at_ms\":1708661141274}}", 
		"LAST");

	 

	lr_think_time(47);

 
# 1157 "Action.c"
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://www.tastynibbles.in/search/suggest.json?q=coco&resources[type]=product%2Carticle&resources[limit]=4&resources[options][unavailable_products]=last&resources[options][fields]=title%2Cproduct_type%2Cvariants.title%2Cvendor", 
		"PollIntervalMs=1200", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		"LAST");

	web_url("suggest.json", 
		"URL=https://www.tastynibbles.in/search/suggest.json?q=coco&resources[type]=product%2Carticle&resources[limit]=4&resources[options][unavailable_products]=last&resources[options][fields]=title%2Cproduct_type%2Cvariants.title%2Cvendor", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"LAST");

 


	 
# 1187 "Action.c"

 


	 
# 1201 "Action.c"

 


	 
# 1215 "Action.c"

 


	web_stop_async("ID=Poll_0", 
		"LAST");

	web_url("search", 
		"URL=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=8acb5653-567a-448d-8c25-dcfc37cee4f7; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661203.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661203.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_35", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/account", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661203814},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/account\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"c02cf406-322d-4fd8-8800-4737a8dd17dd\",\"run_time_duration\":787,\"start_time\":889,\""
		"page_duration\":64262},\"metadata\":{\"event_created_at_ms\":1708661203814}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A06%3A44.492Z; DOMAIN=www.tastynibbles.in");

	web_url("search_2", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_36", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661204448},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661204448}}]}", 
		"LAST");

	web_custom_request("produce_batch_37", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661204491},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/account\",\"path\":\"/search\",\"search\":\"?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"title\":\"Search: 30 results found for \\\\\"Coconut water*\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/search?q=coconut+water*&type=product%2carticle\",\""
		"properties\":{},\"eventId\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"searchresults\",\"customerId\":7180330008751,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\""
		"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d424ec63-2BFE-40B0-E8EF-845A2D563C0C\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661204491}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661204.59.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_38", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661204496},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\",\"search_string\":\"Coconut water*\",\"event_name\":\"search_submitted\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661204496,\"event_source_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q="
		"Coconut%20water*\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d424ec63-2BFE-40B0-E8EF-845A2D563C0C\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751"
		",\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d424ecbe-8492-404C-58C1-04B116307E30\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661204496}}]}", 
		"LAST");

	web_custom_request("produce_batch_39", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661204493},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\",\"referrer\":\"https://www.tastynibbles.in/account\",\"canonical_url\":\"https://www.tastynibbles.in/search?q=coconut+water*&type=product%2carticle\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661204492,\""
		"event_source_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d424ec63-2BFE-40B0-E8EF-845A2D563C0C\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64"
		"; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d424ecbe-8492-404C-58C1-04B116307E30\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661204493}}]}", 
		"LAST");

	web_custom_request("produce_batch_40", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661204496},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661204448}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\"},\"metadata\":{\"event_created_at_ms\":1708661204492}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\\\\\",\\\\\"title\\\\\":\\\\\"Search: 30 results "
		"found for \\\\\\\\\\\\\"Coconut water*\\\\\\\\\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/search?q=coconut+water*&type=product%2carticle\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661204492}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\""
		"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/search\\\\\",\\\\\"page_title\\\\\":\\\\\"Search: 30 results found for \\\\\\\\\\\\\"Coconut water*\\\\\\\\\\\\\" \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/search?q=coconut+"
		"water*&type=product%2carticle\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661204492}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"performedSearch\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\\\"search_string\\\\\":\\\\\""
		"Coconut water*\\\\\"}\",\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\"},\"metadata\":{\"event_created_at_ms\":1708661204495}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"performedSearch\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties"
		"\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/rKUtCN6DyPoCELWQ1bQB\\\\\"],\\\\\"search_term\\\\\":\\\\\"Coconut water*\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661204495}}]}", 
		"LAST");

	web_custom_request("track_11", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vc2VhcmNoP3R5cGU9cHJvZHVjdCUyQ2FydGljbGUmb3B0aW9uc1twcmVmaXhdPWxhc3QmcT1Db2NvbnV0JTIwd2F0ZXIqIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJQdlQzbkc0ZzFiVCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYX"
		"RlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2MjEwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYxMjA1MjAzLCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdp"
		"Y0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVjdENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661204.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_6", 
		"URL=https://www.tastynibbles.in/cart?t=1708661205192&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_41", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661205078},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661204423}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661204423}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type="
		"product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\"},\"metadata\":{\"event_created_at_ms\":1708661204424}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\"},\"metadata\":{\"event_created_at_ms\":1708661204425}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\""
		"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\"},\"metadata\":{\"event_created_at_ms\":1708661204562}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\""
		":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\"},\"metadata\":{\"event_created_at_ms\":1708661204563}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options"
		"[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":138,\"start_time\""
		":1645,\"session_id\":\"7b563107-6a0f-42c1-97c3-aafe389c2549\"},\"metadata\":{\"event_created_at_ms\":1708661204563}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\","
		"\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\"},\"metadata\":{\"event_created_at_ms\":1708661204591}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\""
		"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\""
		":\"standard\",\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\"},\"metadata\":{\"event_created_at_ms\":1708661204594}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":"
		"\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":168,\"start_time\":1645,\"session_id\":\"7b563107-6a0f-42c1-97c3-aafe389c2549\"},\"metadata\":{\"event_created_at_ms\":1708661204594}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\""
		"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d424ec33-241A-4602-AD2E-2CEA1AB276C7\"},\"metadata\":{\"event_created_at_ms\":1708661204645}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"search_submitted\",\"event_type\":\"standard\",\"event_id\":\"sh-d424ec36-7EF9-4759-4E20-22874C561674\"},\"metadata\":{\"event_created_at_ms\":1708661204646}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://"
		"www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\""
		"duration\":220,\"start_time\":1646,\"session_id\":\"7b563107-6a0f-42c1-97c3-aafe389c2549\"},\"metadata\":{\"event_created_at_ms\":1708661204646}}]}", 
		"LAST");

	web_custom_request("track_12", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vc2VhcmNoP3R5cGU9cHJvZHVjdCUyQ2FydGljbGUmb3B0aW9uc1twcmVmaXhdPWxhc3QmcT1Db2NvbnV0JTIwd2F0ZXIqIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJQdlQzbkc0ZzFiVCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYX"
		"RlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2MjEwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYxMjA2MjM0LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_submit_data("configs_7", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180330008751,\"name\":\"Brunda M\",\"email\":\"brunda123@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_url("public_6", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=140d2b1c-98d9-4af1-8a3a-93775e302867; DOMAIN=www.tastynibbles.in");

	web_url("kerala-fish-curry-with-coconut-milk-200g-pouch", 
		"URL=https://www.tastynibbles.in/products/kerala-fish-curry-with-coconut-milk-200g-pouch?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661204604,\"server_timing\":\"{\\\"processing\\\":[688,\\\"gc:19\\\"],\\\"db\\\":[428,\\\"\\\"],\\\"fetch\\\":[318,\\\"\\\"],\\\"render\\\":[146,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"search\\\"],\\\"servedBy\\\":[0,\\\"4lhp\\\"],\\\"requestID\\\":[0"
		",\\\"d39d0e8b-fcd7-428c-8842-0dedbc207d6f\\\"],\\\"cfRequestDuration\\\":[951.999903,\\\"\\\"]}\",\"session_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":2453,\"visually_ready\":2452,\"first_contentful_paint\":1574,\"navigation_start\":1708661202777,\"fetch_start\":1708661202779"
		",\"domain_lookup_start\":1708661202779,\"domain_lookup_end\":1708661202779,\"connect_start\":1708661202779,\"connect_end\":1708661202779,\"request_start\":1708661202814,\"response_start\":1708661203800,\"response_end\":1708661203800,\"dom_loading\":1708661203831,\"dom_interactive\":1708661205155,\"dom_content_loaded_event_start\":1708661205206,\"dom_content_loaded_event_end\":1708661205208,\"dom_complete\":1708661207528,\"load_event_start\":1708661207528,\"load_event_end\":1708661207533,\""
		"secure_connection_start\":1708661202779,\"encoded_body_size\":122739,\"decoded_body_size\":756430,\"transfer_size\":125786,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"315r,1m,1l*118cm,_*22\\\",\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"315s,2c,"
		"2b*13ya,_*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3198,2x,2u*19rw,_*23\\\"}},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"31af*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"32nz,2e*25\\\"},\\\"a\\\":{\\\"maicdn.com/discountmanager/\\\":{\\\"common.js\\\":\\\"31cj,7o*24\\\",\\\"store/5aa2650a51d24b0ad2f4635c32a13771.js?1708661205064\\\":\\\"32oo,vl*21\\\"},\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"31cw,1b7,1ai*1q9o,_*21\\\",\\\"3.\\\":"
		"{\\\"3.1/jquery.min.js\\\":\\\"31rf,wr,wm*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"31ri,29,28*1nxp,_*24\\\"}}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2123,18,17*1p0z,_*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3129,3z,3z*1woh,_*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"315r,z,z*17mf,_*20\\\"},\\\"products/\\\":{\\\"Pack6_\\\":{\\\""
		"1_354e94cd-f9ee-4051-911c-c8f8998f0f9a_280x.jpg?v=1671703708\\\":\\\"*061,61,gt,7v,61,61|125q,64,60,1g*1eyj,14e\\\",\\\"7d34722d-2393-4144-bb70-ef8ba37f0c49_280x.jpg?v=1671702467\\\":\\\"*061,61,gt,l8,61,61|125r,40,3t,2a*1db0,14h\\\"},\\\"Frontside_2_280x.jpg?v=1682743153\\\":\\\"*061,61,gt,16,61,61|125q,bu,bu,w*18e7,14e\\\",\\\"coconutricemockup_280x.jpg?v=1666176678\\\":\\\"*061,61,gt,rw,61,61|125s,78,78,3k*1aub,14i\\\"},\\\"files/\\\":{\\\"Kfccoconutmilkfrontside_280x.jpg?v=1689068036\\\":\\\""
		"*061,61,gt,ej,61,61|125r,3j,3j,1u*17lf,14i\\\",\\\"Frontside_3_37bdd16e-6376-4fff-9d99-756e52d97ddd_280x.jpg?v=1682957009\\\":\\\"*061,61,rc,16,61,61|125s,5n,5f,41*19dz,14k\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3129,2m,2l*12sn,_*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3129,3a,39*1a2h,_*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"316w,3v,3v*1294,_*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"316w,3a,3a*1k49,_*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"316v,2k,2k*1kyi,_*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3123,5s,5m,3o*1su,o7,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"315s*21\\\",\\\""
		"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"31ag,5y*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"31iu,4e*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"31iu,5h*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"31bg,5t*21\\\"},\\\".com/\\\":{\\\"pagead/1p-conversion/378882101/?...\\\":\\\"31oa,131,131,101*11ci,gr,yu*21|31og,1pk,1pk,1m7,12y,12y,12y,12y,12y,12n*11r,p9,-k*21\\\",\\\"ccm/conversion/378882101/?...\\\":\\\"11od,12f|11oh,16p\\"
		"\"}}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3123,71,71,5x,5u,3t,3t,3t,3o*1,m3*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"31cj,8c*26\\\",\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"11oe|11oj\\\"}}\",\"url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"referrer\":\"https://www.tastynibbles.in/account\",\""
		"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661204551,\"event_sent_at_ms\":1708661207563}}", 
		"LAST");

	web_add_cookie("keep_alive=4aea9ded-ea93-442f-bbf9-44ce2ab98f5d; DOMAIN=www.tastynibbles.in");

	web_url("tasty-nibbles-pulpy-tender-coconut-water-200ml-pack-of-6", 
		"URL=https://www.tastynibbles.in/products/tasty-nibbles-pulpy-tender-coconut-water-200ml-pack-of-6?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=8a76bf31-dc6a-46f6-b193-94ae70a3a8d8; DOMAIN=www.tastynibbles.in");

	web_url("tasty-nibbles-tender-coconut-water-200ml-pack-of-6", 
		"URL=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_cookie("keep_alive=78ddc248-83bc-4b34-85ea-16da551b0b8c; DOMAIN=www.tastynibbles.in");

	lr_think_time(25);

	web_url("ready-to-eat-coconut-rice-250g", 
		"URL=https://www.tastynibbles.in/products/ready-to-eat-coconut-rice-250g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=03a8d261-52e9-47af-8412-e306a7fadae1; DOMAIN=www.tastynibbles.in");

	web_url("tasty-nibbles-tender-coconut-water-200ml-pack-of-6_2", 
		"URL=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=02fe2c2d-76e2-457f-b349-c410cfd829b1; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661242.21.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661242.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_42", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661242247},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\""
		"7b563107-6a0f-42c1-97c3-aafe389c2549\",\"run_time_duration\":323,\"start_time\":1543,\"page_duration\":37924},\"metadata\":{\"event_created_at_ms\":1708661242247}}]}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A07%3A22.742Z; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_43", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661242730},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661242730}}]}", 
		"LAST");

	web_custom_request("produce_batch_44", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661242742},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"path\":\"/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6\",\"search\":\"?_pos=4&_sid=6b1a92cec&_ss=r\",\"title\":\"Tender Coconut Water 200ml (Pack of 6) \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://"
		"www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"properties\":{},\"eventId\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"product\",\"customerId\":7180330008751,\"resourceType\":\"product\",\"resourceId\":7426164752559,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\""
		"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661242742}}]}", 
		"LAST");

	web_custom_request("produce_batch_45", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661242743},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\",\"referrer\":\"https://www.tastynibbles.in/search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"canonical_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\""
		"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661242743,\"event_source_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\""
		"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d4258065-D549-4064-6FE0-05E48A2ECCC8\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661242743}}]}", 
		"LAST");

	web_url("tasty-nibbles-tender-coconut-water-200ml-pack-of-6_3", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_46", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661242745},\"events\":[{\"schema_id\":\"trekkie_storefront_viewed_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_viewed_product/1.1\",\"properties\":{},\"eventId\":\"d4258069-8396-4642-9912-99199E03D0C5\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"currency\":\"INR\",\"variantId\":42201877151919,\"productId\":7426164752559,\"productGid\":\"gid://shopify/Product/"
		"7426164752559\",\"name\":\"Tender Coconut Water 200ml (Pack of 6)\",\"price\":\"360.00\",\"sku\":\"CPDFG31939\",\"brand\":\"Tasty Nibbles\",\"variant\":null,\"category\":\"\",\"nonInteraction\":true,\"referer\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\""
		",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"microSessionCount\":3,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661242745}}]}", 
		"LAST");

	web_custom_request("produce_batch_47", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661242745},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\",\"products\":[\"{\\\"variant_id\\\":42201877151919,\\\"product_id\\\":7426164752559,\\\"product_gid\\\":\\\"gid://shopify/Product/7426164752559\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"price\\\":360,\\\"sku\\\":\\\"CPDFG31939\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\""
		":null,\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":360,\"currency\":\"INR\",\"event_name\":\"product_page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661242744,\"event_source_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\""
		"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\""
		"sh-d4258065-D549-4064-6FE0-05E48A2ECCC8\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661242745}}]}", 
		"LAST");

	web_custom_request("produce_batch_48", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708661242746},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\""
		":1708661242731}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\"},\"metadata\":{\"event_created_at_ms\":1708661242742}},{"
		"\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\\\\\",\\\\\""
		"title\\\\\":\\\\\"Tender Coconut Water 200ml (Pack of 6) \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661242742}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\""
		"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6\\\\\",\\\\\"page_title\\\\\":\\\\\"Tender Coconut Water 200ml (Pack of 6) \\xE2\\x80\\x93 Tasty Nibbles\\\\\","
		"\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708661242743}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"viewedProduct\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\""
		"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\\\"content_ids\\\\\":[7426164752559],\\\\\"content_type\\\\\":\\\\\"product_group\\\\\",\\\\\"content_name\\\\\":\\\\\"Tender Coconut Water 200ml (Pack of 6)\\\\\",\\\\\"content_category\\\\\":\\\\\"\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\",\\\\\"value\\\\\":\\\\\"360.00\\\\\"}\",\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\"},\"metadata\":{\"event_created_at_ms\":1708661242744}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"viewedProduct\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"item\\\\\":{\\\\\"id\\\\\":\\\\\"CPDFG31939\\\\\",\\\\\"name\\\\\":\\\\\"Tender Coconut Water 200ml (Pack of 6)\\\\\","
		"\\\\\"category\\\\\":\\\\\"\\\\\",\\\\\"quantity\\\\\":1,\\\\\"price\\\\\":\\\\\"360.00\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"variant\\\\\":null,\\\\\"currency\\\\\":\\\\\"INR\\\\\"},\\\\\"event\\\\\":{\\\\\"eventCategory\\\\\":\\\\\"EnhancedEcommerce\\\\\",\\\\\"eventAction\\\\\":\\\\\"Viewed Product\\\\\",\\\\\"nonInteraction\\\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661242744}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\""
		"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"viewedProduct\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/hk9rCNWDyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"ecomm_prodid\\\\\":[\\\\\"shopify_IN_7426164752559_42201877151919\\\\\"],\\\\\""
		"ecomm_totalvalue\\\\\":null,\\\\\"ecomm_pagetype\\\\\":\\\\\"product\\\\\",\\\\\"items\\\\\":[{\\\\\"id\\\\\":\\\\\"shopify_IN_7426164752559_42201877151919\\\\\",\\\\\"name\\\\\":\\\\\"Tender Coconut Water 200ml (Pack of 6)\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"category\\\\\":\\\\\"\\\\\",\\\\\"price\\\\\":\\\\\"360.00\\\\\",\\\\\"variant\\\\\":null}]}\"},\"metadata\":{\"event_created_at_ms\":1708661242744}}]}", 
		"LAST");

	web_custom_request("track_13", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvdGFzdHktbmliYmxlcy10ZW5kZXItY29jb251dC13YXRlci0yMDBtbC1wYWNrLW9mLTY%2FX3Bvcz00Jl9zaWQ9NmIxYTkyY2VjJl9zcz1yIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJRYkduZ0ZVMzNIUiIsImNoZWNrb3V0U3JjIjoicHJv"
		"ZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2MjEwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4NjYxMjQzNTAwLCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZW"
		"N0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVjdENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661243.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_49", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661243305},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708661242678}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\""
		"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661242679}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\"},\"metadata\":{\"event_created_at_ms\":1708661242681}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\"},\"metadata\":{\"event_created_at_ms\":1708661242682}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\""
		",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\"},\"metadata\":{\"event_created_at_ms\":1708661242806}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\""
		"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\"},\"metadata\":{\"event_created_at_ms\":1708661242806}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\""
		"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\""
		"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":125,\"start_time\":1201,\"session_id\":\"56f07702-2b58-4afd-889f-1d605c04a7be\"},\"metadata\":{\"event_created_at_ms\":1708661242806}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid="
		"6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\"},\"metadata\":{\""
		"event_created_at_ms\":1708661242834}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\""
		":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\"},\"metadata\":{\"event_created_at_ms\":1708661242835}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/"
		"tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":155,\"start_time\":1200,\"session_id\":\"56f07702-2b58-4afd-889f-1d605c04a7be\"},\"metadata\":{\"event_created_at_ms\":1708661242836}}]}", 
		"LAST");

	web_url("cart_7", 
		"URL=https://www.tastynibbles.in/cart?t=1708661243478&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("42201877151919", 
		"URL=https://www.tastynibbles.in//variants/42201877151919/?section_id=store-availability", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("keep_alive=78bad8f1-3630-4441-9f82-cbd21ca3c355; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_50", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661243929},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fe7-4292-4B91-F6AF-DCC09B712F1C\"},\"metadata\":{\"event_created_at_ms\":1708661243424}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/"
		"tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d4257fea-5C81-4008-A6DE-03DC878467E7\"},\"metadata\":{\""
		"event_created_at_ms\":1708661243425}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\""
		"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":742,\"start_time\":1201,\"session_id\":\"56f07702-2b58-4afd-889f-1d605c04a7be\"},\"metadata\":{\"event_created_at_ms\":1708661243425}}]}", 
		"LAST");

	web_custom_request("track_14", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vcHJvZHVjdHMvdGFzdHktbmliYmxlcy10ZW5kZXItY29jb251dC13YXRlci0yMDBtbC1wYWNrLW9mLTY%2FX3Bvcz00Jl9zaWQ9NmIxYTkyY2VjJl9zcz1yIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUJRYkduZ0ZVMzNIUiIsImNoZWNrb3V0U3JjIjoicHJv"
		"ZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiIzYTU1MWFhZi1hZWNlLTRiY2ItYWI5OC03YTFmZmQ2MjEwZTkifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4NjYxMjQ0NTE4LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		"LAST");

	web_url("public_7", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("configs_8", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=customer_info", "Value={\"id\":7180330008751,\"name\":\"Brunda M\",\"email\":\"brunda123@gmail.com\",\"tags\":[],\"isB2B\":false,\"metafields\":{\"companyId\":\"\",\"companyLocationId\":\"\",\"companyContactId\":\"\"}}", "ENDITEM", 
		"Name=customer_location", "Value=null", "ENDITEM", 
		"Name=promotion_url", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("produce_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708661242828,\"server_timing\":\"{\\\"processing\\\":[395,\\\"gc:62\\\"],\\\"db\\\":[101,\\\"\\\"],\\\"fetch\\\":[157,\\\"\\\"],\\\"render\\\":[58,\\\"\\\"],\\\"wasm\\\":[0,\\\"\\\"],\\\"wasmDownload\\\":[158,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"product\\\"],\\\"servedBy\\\":"
		"[0,\\\"sstw\\\"],\\\"requestID\\\":[0,\\\"5d54df7d-b9b7-4412-99e4-5836910f38b5\\\"],\\\"cfRequestDuration\\\":[687.000036,\\\"\\\"]}\",\"session_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-us-central1\",\"largest_contentful_paint\":2036,\"visually_ready\":2032,\"first_contentful_paint\":1155,\"navigation_start\""
		":1708661241480,\"fetch_start\":1708661241482,\"domain_lookup_start\":1708661241482,\"domain_lookup_end\":1708661241482,\"connect_start\":1708661241482,\"connect_end\":1708661241482,\"request_start\":1708661241513,\"response_start\":1708661242235,\"response_end\":1708661242235,\"dom_loading\":1708661242269,\"dom_interactive\":1708661243443,\"dom_content_loaded_event_start\":1708661243503,\"dom_content_loaded_event_end\":1708661243506,\"dom_complete\":1708661246064,\"load_event_start\":1708661246064"
		",\"load_event_end\":1708661246072,\"secure_connection_start\":1708661241482,\"encoded_body_size\":99042,\"decoded_body_size\":462269,\"transfer_size\":102052,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.\\\":{\\\"shopify.com/\\\":{\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3rg,35,35*13ya,_*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3um,2p,2p*19rw,"
		"_*23\\\"},\\\"extensions/7ba13983-ac7b-4803-aa0a-e6c2af7b2b86/bogo-476/assets/wbogo.min.js\\\":\\\"3rl,45,45*118cm,_*22\\\"},\\\"judge.me/widget_v3/base.css\\\":\\\"21k8*44\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3yy*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"32cd,1q*25\\\"},\\\"a\\\":{\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"310f,1me,1m7*1q9o,_*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"31h2,15r,15q*1ngf,_,17m8*21\\\","
		"\\\"5.1/jquery.min.js\\\":\\\"31h7,10,10*1nxp,_*24\\\"}},\\\"maicdn.com/discountmanager/\\\":{\\\"common.js\\\":\\\"310w,7y*24\\\",\\\"store/5aa2650a51d24b0ad2f4635c32a13771.js?1708661243391\\\":\\\"32n7,w2*21\\\"}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2m3,4f,4e*1p0z,_*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3m3,7c,7c*1woh,_*22\\\",\\\"sca_affiliate.js?v="
		"2076242293115890491652863580\\\":\\\"3rd,2p,2o*17mf,_*20\\\"},\\\"products/\\\":{\\\"Pack6_7d34722d-2393-4144-bb70-ef8ba37f0c49_\\\":{\\\"120x.jpg?v=1671702467\\\":\\\"*024,24,bg,16|11kr,6d,6d,31*148q,148\\\",\\\"540x.jpg?v=1671702467\\\":\\\"*0dg,dg,bf,3s,dg,dg|11kr,5f,5e,30*111my,10m\\\"},\\\"Frontside_891d5047-fe62-4c17-a10b-4c3a5e924b5d_\\\":{\\\"120x.jpg?v=1671702470\\\":\\\"*024,24,e3,16|11rg,71,70,3i*123f,149\\\",\\\"540x.jpg?v=1671702470\\\":\\\"*0dg,dg,bf,h8,dg,dg|11rf,i5,i2,r*1dtw,14d\\"
		"\"},\\\"Barocde_120x.jpg?v=1671702469\\\":\\\"*024,24,gq,16|11rg,9t,9t,5h*1176,147\\\",\\\"Marketedby_15d84a36-b204-4b3f-af1c-a7ff2935584d_120x.jpg?v=1671702467\\\":\\\"*024,24,jd,16|11rg,aq,ap,76*11gs,14g\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3m3,65,65*12sn,_*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3m3,6q,6q*1a2h,_*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3w0,2v,2v*1294,_*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3w0,28,28*1k49,_*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3u7,2g,2g*1kyi,_*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3m3,9o,9n,5f*1su,o5,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3rh*21\\\",\\\"google\\"
		"\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3z0,4t*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"315f,4t*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"315g,5c*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3z1,5k*21\\\"},\\\".com/\\\":{\\\"ccm/conversion/378882101/?...\\\":\\\"11bf,1jd|11bk,1jk\\\",\\\"pagead/1p-conversion/378882101/?...\\\":\\\"31bg,24f,24c,21s,1ff,1ff,1ff,1ff,1ff,1fe*11r,m2,-k*21|31bl,20q,20m,1y1,1fa,1fa,1fa,1fa,1fa,"
		"1f9*11r,pl,-k*21\\\"}}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3m3,5n,5m*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"310w,8o*26\\\",\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"11bg|11bl\\\"}}\",\"url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"referrer\":\"https://www.tastynibbles.in/"
		"search?type=product%2Carticle&options[prefix]=last&q=Coconut%20water*\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708661242812,\"event_sent_at_ms\":1708661246090}}", 
		"LAST");

	 

	web_add_cookie("_shopify_ga=undefined; DOMAIN=www.tastynibbles.in");

	lr_think_time(18);

	web_submit_data("add.js", 
		"Action=https://www.tastynibbles.in/cart/add.js", 
		"Method=POST", 
		"RecContentType=text/javascript", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=form_type", "Value=product", "ENDITEM", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=id", "Value=42201877151919", "ENDITEM", 
		"Name=product-id", "Value=7426164752559", "ENDITEM", 
		"Name=section-id", "Value=template--15564373229743__main", "ENDITEM", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661267.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_gcl_au=1.1.1793844992.1708660979.899084075.1708661100.1708661267; DOMAIN=www.tastynibbles.in");

	web_add_cookie("cart_currency=INR; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_51", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661267799},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\",\"products\":[\"{\\\"variant_id\\\":42201877151919,\\\"product_id\\\":7426164752559,\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"price\\\":360,\\\"sku\\\":\\\"CPDFG31939\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":null,\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\""
		"total_value\":360,\"currency\":\"INR\",\"cart_token\":\"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661267799,\"event_source_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\""
		"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\""
		"sh-d4258065-D549-4064-6FE0-05E48A2ECCC8\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661267799}}]}", 
		"LAST");

	web_custom_request("produce_batch_52", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661267800},\"events\":[{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"addedProduct\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\"content_ids\\\":[7426164752559],\\\"content_type\\\":\\\""
		"product_group\\\",\\\"content_name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"content_category\\\":\\\"\\\",\\\"currency\\\":\\\"INR\\\",\\\"value\\\":\\\"360.00\\\",\\\"num_items\\\":\\\"1\\\"}\",\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\"},\"metadata\":{\"event_created_at_ms\":1708661267781}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"addedProduct\",\""
		"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"item\\\":{\\\"id\\\":\\\"CPDFG31939\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":\\\"1\\\",\\\"price\\\":360,\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":null,\\\"currency\\\":\\\"INR\\\"},\\\"event\\\":{\\\""
		"eventCategory\\\":\\\"EnhancedEcommerce\\\",\\\"eventAction\\\":\\\"Added Product\\\",\\\"nonInteraction\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708661267781}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"addedProduct\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\""
		"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/nYbCCNiDyPoCELWQ1bQB\\\"],\\\"ecomm_prodid\\\":[\\\"shopify_IN_7426164752559_42201877151919\\\"],\\\"ecomm_totalvalue\\\":360,\\\"ecomm_pagetype\\\":\\\"cart\\\",\\\"value\\\":360,\\\"currency\\\":\\\"INR\\\",\\\"items\\\":[{\\\"id\\\":\\\"shopify_IN_7426164752559_42201877151919\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\":\\\"\\\","
		"\\\"price\\\":\\\"360\\\",\\\"quantity\\\":\\\"1\\\",\\\"variant\\\":null}]}\"},\"metadata\":{\"event_created_at_ms\":1708661267799}}]}", 
		"LAST");

	web_custom_request("produce_batch_53", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661267801},\"events\":[{\"schema_id\":\"trekkie_storefront_track_added_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_track_added_product/1.1\",\"properties\":{},\"eventId\":\"d4264429-DE93-4844-2514-43E734B5319B\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"referer\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid="
		"6b1a92cec&_ss=r\",\"variantId\":\"42201877151919\",\"productId\":7426164752559,\"currency\":\"INR\",\"quantity\":\"1\",\"price\":360,\"name\":\"Tender Coconut Water 200ml (Pack of 6)\",\"sku\":\"CPDFG31939\",\"brand\":\"Tasty Nibbles\",\"variant\":null,\"category\":\"\",\"pageType\":\"product\",\"resourceType\":\"product\",\"resourceId\":7426164752559,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\""
		"appName\":\"storefront\",\"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d425804b-0F23-4658-9E0D-26D6CCAFACEE\",\"microSessionCount\":6,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708661267801}}]}", 
		"LAST");

	web_url("cart_8", 
		"URL=https://www.tastynibbles.in/cart?t=1708661267809&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("cart_9", 
		"URL=https://www.tastynibbles.in/cart?view=appikon.json&_=1708661244903", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("produce_batch_54", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661268279},\"events\":[{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\"},\"metadata\":{\"event_created_at_ms\":1708661267778}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\""
		"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\"},\"metadata\":{\"event_created_at_ms\":1708661267779}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\""
		"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\""
		"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\"},\"metadata\":{\"event_created_at_ms\":1708661267779}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\""
		"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d42643f9-CFC5-49B7-A480-FFDAE92DF357\"},\"metadata\":{\"event_created_at_ms\":1708661267780}}]}", 
		"LAST");

	web_custom_request("campaigns", 
		"URL=https://www.tastynibbles.in/apps/discos/campaigns?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=feks_settings=%7B%22shop_slug%22%3A%22tastynibbles%22%2C%22shop_id%22%3A%2255925866671%22%2C%22money_format%22%3A%22%E2%82%B9+%7B%7Bamount%7D%7D%22%2C%22shop_cart_subtotal_text%22%3A%22Saved+amount%3A+%22%2C%22customer%22%3A%7B%22id%22%3A7180330008751%2C%22name%22%3A%22Brunda+"
		"M%22%2C%22email%22%3A%22brunda123%40gmail.com%22%2C%22tags%22%3A%5B%5D%2C%22isB2B%22%3Afalse%2C%22metafields%22%3A%7B%22companyId%22%3A%22%22%2C%22companyLocationId%22%3A%22%22%2C%22companyContactId%22%3A%22%22%7D%7D%2C%22cart%22%3A%7B%22note%22%3Anull%2C%22attributes%22%3A%7B%7D%2C%22original_total_price%22%3A0%2C%22total_price%22%3A0%2C%22total_discount%22%3A0%2C%22total_weight%22%3A0%2C%22item_count%22%3A0%2C%22items%22%3A%5B%5D%2C%22requires_shipping%22%3Afalse%2C%22currency%22%3A%22INR%22%2C%"
		"22items_subtotal_price%22%3A0%2C%22cart_level_discount_applications%22%3A%5B%5D%2C%22checkout_charge_amount%22%3A0%7D%2C%22shop_locale%22%3A%22en%22%2C%22product%22%3A%7B%22id%22%3A7426164752559%2C%22title%22%3A%22Tender+Coconut+Water+200ml+(Pack+of+6)%22%2C%22handle%22%3A%22tasty-nibbles-tender-coconut-water-200ml-pack-of-6%22%2C%22description%22%3A%22%3Cp%3E%3Cspan+data-mce-fragment%3D%5C%221%5C%22%3ETender+Coconut+Water+is+a+Ready+to+drink+%2Cfat+free+drink+%2Cprepared+from+carefully+"
		"%C2%A0selected%C2%A0+tender+coconut+.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3EIt+has+no+added+sugar.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EIt+is+naturally+low+in+calories%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3ENo+added+Flavours%2C+Colours+or+Concentrates%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EHelps+to+hydrate+and+cool+the+body.%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EHygienically+"
		"packed.%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EPromotes+overall+well+being%3C%2Fp%3E%22%2C%22published_at%22%3A%222022-12-28T12%3A34%3A26%2B05%3A30%22%2C%22created_at%22%3A%222022-12-22T15%3A17%3A46%2B05%3A30%22%2C%22vendor%22%3A%22Tasty+"
		"Nibbles%22%2C%22type%22%3A%22%22%2C%22tags%22%3A%5B%22all%22%2C%22engtas157%22%5D%2C%22price%22%3A36000%2C%22price_min%22%3A36000%2C%22price_max%22%3A36000%2C%22available%22%3Atrue%2C%22price_varies%22%3Afalse%2C%22compare_at_price%22%3A36000%2C%22compare_at_price_min%22%3A36000%2C%22compare_at_price_max%22%3A36000%2C%22compare_at_price_varies%22%3Afalse%2C%22variants%22%3A%5B%7B%22id%22%3A42201877151919%2C%22title%22%3A%22Default+Title%22%2C%22option1%22%3A%22Default+"
		"Title%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31939%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3Anull%2C%22available%22%3Atrue%2C%22name%22%3A%22Tender+Coconut+Water+200ml+(Pack+of+6)%22%2C%22public_title%22%3Anull%2C%22options%22%3A%5B%22Default+"
		"Title%22%5D%2C%22price%22%3A36000%2C%22weight%22%3A2000%2C%22compare_at_price%22%3A36000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%22%22%2C%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%5D%2C%22images%22%3A%5B%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_7d34722d-2393-4144-bb70-ef8ba37f0c49.jpg%3Fv%3D1671702467%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_891d5047-fe62-4c17-a10b-4c3a5e924b5d.jpg%3Fv%3D1"
		"671702470%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBarocde.jpg%3Fv%3D1671702469%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FMarketedby_15d84a36-b204-4b3f-af1c-a7ff2935584d.jpg%3Fv%3D1671702467%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_d9db7f6e-2399-449d-8cc4-cb6c7eccf682.jpg%3Fv%3D1671702469%22%2C%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FManufacturedby_289a9582-55f7-432f-94f8-a277447830d7.jpg%3Fv%3D1671702468%22%2C%22%2F"
		"%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritioninformation.jpg%3Fv%3D1671702468%22%5D%2C%22featured_image%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_7d34722d-2393-4144-bb70-ef8ba37f0c49.jpg%3Fv%3D1671702467%22%2C%22options%22%3A%5B%22Title%22%5D%2C%22media%22%3A%5B%7B%22alt%22%3Anull%2C%22id%22%3A28069447794863%2C%22position%22%3A1%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.i"
		"n%2Fcdn%2Fshop%2Fproducts%2FPack6_7d34722d-2393-4144-bb70-ef8ba37f0c49.jpg%3Fv%3D1671702467%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FPack6_7d34722d-2393-4144-bb70-ef8ba37f0c49.jpg%3Fv%3D1671702467%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069447827631%2C%22position%22%3A2%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%"
		"2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_891d5047-fe62-4c17-a10b-4c3a5e924b5d.jpg%3Fv%3D1671702470%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FFrontside_891d5047-fe62-4c17-a10b-4c3a5e924b5d.jpg%3Fv%3D1671702470%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069447860399%2C%22position%22%3A3%2C%22preview_image%22%3A%7B%22aspect_ratio%2"
		"2%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBarocde.jpg%3Fv%3D1671702469%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FBarocde.jpg%3Fv%3D1671702469%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069447893167%2C%22position%22%3A4%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2"
		"C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FMarketedby_15d84a36-b204-4b3f-af1c-a7ff2935584d.jpg%3Fv%3D1671702467%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FMarketedby_15d84a36-b204-4b3f-af1c-a7ff2935584d.jpg%3Fv%3D1671702467%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069447925935%2C%22position%22%3A5%2C%22preview_image%22%"
		"3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_d9db7f6e-2399-449d-8cc4-cb6c7eccf682.jpg%3Fv%3D1671702469%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FIngredients_d9db7f6e-2399-449d-8cc4-cb6c7eccf682.jpg%3Fv%3D1671702469%22%2C%22width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069"
		"447958703%2C%22position%22%3A6%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FManufacturedby_289a9582-55f7-432f-94f8-a277447830d7.jpg%3Fv%3D1671702468%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FManufacturedby_289a9582-55f7-432f-94f8-a277447830d7.jpg%3Fv%3D1671702468%22%2C%22"
		"width%22%3A1500%7D%2C%7B%22alt%22%3Anull%2C%22id%22%3A28069447991471%2C%22position%22%3A7%2C%22preview_image%22%3A%7B%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22width%22%3A1500%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritioninformation.jpg%3Fv%3D1671702468%22%7D%2C%22aspect_ratio%22%3A1%2C%22height%22%3A1500%2C%22media_type%22%3A%22image%22%2C%22src%22%3A%22%2F%2Fwww.tastynibbles.in%2Fcdn%2Fshop%2Fproducts%2FNutritioninformation.jpg%3Fv%3D1671702468%22%2C%22wid"
		"th%22%3A1500%7D%5D%2C%22requires_selling_plan%22%3Afalse%2C%22selling_plan_groups%22%3A%5B%5D%2C%22content%22%3A%22%3Cp%3E%3Cspan+data-mce-fragment%3D%5C%221%5C%22%3ETender+Coconut+Water+is+a+Ready+to+drink+%2Cfat+free+drink+%2Cprepared+from+carefully+%C2%A0selected%C2%A0+tender+coconut+.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp%3E%3Cspan%3EIt+has+no+added+sugar.%3C%2Fspan%3E%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EIt+is+naturally+low+in+calories%3C%2Fp%3E%5Cn%3Cp+"
		"style%3D%5C%22font-weight%3A+400%3B%5C%22%3ENo+added+Flavours%2C+Colours+or+Concentrates%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EHelps+to+hydrate+and+cool+the+body.%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EHygienically+packed.%3C%2Fp%3E%5Cn%3Cp+style%3D%5C%22font-weight%3A+400%3B%5C%22%3EPromotes+overall+well+"
		"being%3C%2Fp%3E%22%7D%2C%22product_collections%22%3A%7B%227426164752559%22%3A%5B310480994479%2C288549011631%2C307614974127%2C309449097391%2C272056484015%2C285126688943%5D%7D%2C%22first_variant%22%3A%7B%22id%22%3A42201877151919%2C%22title%22%3A%22Default+Title%22%2C%22option1%22%3A%22Default+"
		"Title%22%2C%22option2%22%3Anull%2C%22option3%22%3Anull%2C%22sku%22%3A%22CPDFG31939%22%2C%22requires_shipping%22%3Atrue%2C%22taxable%22%3Afalse%2C%22featured_image%22%3Anull%2C%22available%22%3Atrue%2C%22name%22%3A%22Tender+Coconut+Water+200ml+(Pack+of+6)%22%2C%22public_title%22%3Anull%2C%22options%22%3A%5B%22Default+"
		"Title%22%5D%2C%22price%22%3A36000%2C%22weight%22%3A2000%2C%22compare_at_price%22%3A36000%2C%22inventory_management%22%3A%22shopify%22%2C%22barcode%22%3A%22%22%2C%22requires_selling_plan%22%3Afalse%2C%22selling_plan_allocations%22%3A%5B%5D%7D%2C%22cart_collections%22%3A%7B%7D%2C%22page_template%22%3A%22product%22%7D&feks_products=%5B%7B%22product_id%22%3A7426164752559%2C%22quantity%22%3A1%2C%22title%22%3A%22Tender+Coconut+Water+200ml+(Pack+of+6)"
		"%22%2C%22handle%22%3A%22tasty-nibbles-tender-coconut-water-200ml-pack-of-6%22%2C%22line_price%22%3A36000%2C%22price%22%3A36000%2C%22variant_id%22%3A42201877151919%2C%22product_has_only_default_variant%22%3Atrue%2C%22collection_ids%22%3A%5B310480994479%2C288549011631%2C307614974127%2C309449097391%2C272056484015%2C285126688943%5D%7D%5D&feks_page_template=product&feks_cart_total=36000&wizz_custom_cart_items="
		"%5B%7B%22id%22%3A42201877151919%2C%22quantity%22%3A1%2C%22variant_id%22%3A42201877151919%2C%22product_id%22%3A7426164752559%2C%22discounted_price%22%3A36000%2C%22wizz_offer_data%22%3A%22null%22%2C%22belong_to_collections%22%3A%5B310480994479%2C288549011631%2C307614974127%2C309449097391%2C272056484015%2C285126688943%5D%7D%5D&currency_rate=1.0&browser_info=%7B%7D&promotion_url=", 
		"LAST");

	web_add_cookie("keep_alive=e671465d-dfa0-4db3-936d-8cf631dc2a74; DOMAIN=www.tastynibbles.in");

	web_url("kerala-fish-curry-shappile-curry-185g", 
		"URL=https://www.tastynibbles.in/products/kerala-fish-curry-shappile-curry-185g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_cookie("keep_alive=bc020e10-6047-4078-beab-624423a8184f; DOMAIN=www.tastynibbles.in");

	web_url("checkout", 
		"URL=https://www.tastynibbles.in/checkout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661285.42.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661285.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_55", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661285872},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\""
		"56f07702-2b58-4afd-889f-1d605c04a7be\",\"run_time_duration\":857,\"start_time\":1087,\"page_duration\":43303},\"metadata\":{\"event_created_at_ms\":1708661285872}}]}", 
		"LAST");

	web_add_cookie("queue_token=AgVvJ9WpLDScCE9nhbeQZ6bD3CZO1XVz4SkmjqAMSsmajo9cauHtXMQYLO2tRMfO2pIJuu9BB6-RTGaG-0yKENPuFtzPsd8wCUo6ZrquL_Zi0W-GufybMca9jVefH8YTLl3MhUDiL0SPcz1Nztik_R-r_eo8BtbfMfD2TrL_VSde-zFlCtrCyxab; DOMAIN=www.tastynibbles.in");

	web_add_auto_header("Accept-Language", 
		"en-IN");

	web_custom_request("graphql", 
		"URL=https://www.tastynibbles.in/checkouts/unstable/graphql", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"query BillingCountries{shop{id billingCountries{value:code label:name __typename}__typename}}\",\"variables\":{},\"operationName\":\"BillingCountries\"}", 
		"LAST");

	web_add_cookie("_shopify_sa_t=2024-02-23T04%3A08%3A07.534Z; DOMAIN=www.tastynibbles.in");

	web_add_cookie("skip_shop_pay=false; DOMAIN=www.tastynibbles.in");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.5");

	web_custom_request("produce_batch_56", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287490},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"app_name\":\"checkout\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-checkout-one\"},\"metadata\":{\"event_created_at_ms\":1708661287476}}]}", 
		"LAST");

	web_custom_request("produce_batch_57", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287476},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708661287476}}]}", 
		"LAST");

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708660977.1.1.1708661287.40.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_58", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287530},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\",\"products\":[\"{\\\"variant_id\\\":42201877151919,\\\"product_id\\\":7426164752559,\\\"product_gid\\\":\\\"gid://shopify/Product/7426164752559\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"price\\\":360,\\\"sku\\\":\\\"CPDFG31939\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\""
		":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":0,\"currency\":\"INR\",\"event_name\":\"checkout_started\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661287530,\"event_source_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d42632a1-6A4D-40E0-4C50-17A7E8C2F108\",\"source\":\""
		"trekkie-checkout-one\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\",\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\""
		"sh-d426330d-747E-4491-5A57-5F2E63F868D4\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661287530}}]}", 
		"LAST");

	web_custom_request("produce_batch_59", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287531},\"events\":[{\"schema_id\":\"trekkie_checkout_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"startedOrder\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\"content_ids\\\":[7426164752559],\\\"content_type\\\":\\\""
		"product_group\\\",\\\"currency\\\":\\\"INR\\\",\\\"value\\\":\\\"360.00\\\",\\\"num_items\\\":1}\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\",\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\"},\"metadata\":{\"event_created_at_ms\":1708661287530}},{\"schema_id\":\"trekkie_checkout_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"startedOrder\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\""
		"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"items\\\":[{\\\"id\\\":\\\"CPDFG31939\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":1,\\\"price\\\":360,\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"currency\\\":\\\"INR\\\"}],\\\"checkoutStep\\\":1,\\\"event\\\":{\\\"eventCategory\\\":\\\"EnhancedEcommerce\\\",\\\"eventAction\\\":\\\""
		"Started Order\\\",\\\"nonInteraction\\\":true}}\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661287530}},{\"schema_id\":\"trekkie_checkout_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"startedOrder\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\""
		",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/7TleCNuDyPoCELWQ1bQB\\\"],\\\"ecomm_prodid\\\":[\\\"shopify_IN_7426164752559_42201877151919\\\"],\\\"ecomm_totalvalue\\\":360,\\\"ecomm_pagetype\\\":\\\"cart\\\",\\\"value\\\":360,\\\"currency\\\":\\\"INR\\\",\\\"items\\\":[{\\\"id\\\":\\\"shopify_IN_7426164752559_42201877151919\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\":\\\"\\\",\\\"price\\\""
		":\\\"360\\\",\\\"quantity\\\":1}],\\\"ignore_referrer\\\":\\\"true\\\"}\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661287530}}]}", 
		"LAST");

	web_url("Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0574/sandbox/modern/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-IN");

	web_custom_request("graphql_2", 
		"URL=https://www.tastynibbles.in/checkouts/unstable/graphql", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"query Proposal($alternativePaymentCurrency:AlternativePaymentCurrencyInput,$delivery:DeliveryTermsInput,$discounts:DiscountTermsInput,$payment:PaymentTermInput,$merchandise:MerchandiseTermInput,$buyerIdentity:BuyerIdentityTermInput,$taxes:TaxTermInput,$sessionInput:SessionTokenInput!,$checkpointData:String,$queueToken:String,$reduction:ReductionInput,$availableRedeemables:AvailableRedeemablesInput,$changesetTokens:[String!],$tip:TipTermInput,$note:NoteInput,$localizationExtension"
		":LocalizationExtensionInput,$nonNegotiableTerms:NonNegotiableTermsInput,$scriptFingerprint:ScriptFingerprintInput,$transformerFingerprintV2:String,$optionalDuties:OptionalDutiesInput,$attribution:AttributionInput,$captcha:CaptchaInput,$poNumber:String,$saleAttributions:SaleAttributionsInput){session(sessionInput:$sessionInput){negotiate(input:{purchaseProposal:{alternativePaymentCurrency:$alternativePaymentCurrency,delivery:$delivery,discounts:$discounts,payment:$payment,merchandise:$merchandise,"
		"buyerIdentity:$buyerIdentity,taxes:$taxes,reduction:$reduction,availableRedeemables:$availableRedeemables,tip:$tip,note:$note,poNumber:$poNumber,nonNegotiableTerms:$nonNegotiableTerms,localizationExtension:$localizationExtension,scriptFingerprint:$scriptFingerprint,transformerFingerprintV2:$transformerFingerprintV2,optionalDuties:$optionalDuties,attribution:$attribution,captcha:$captcha,saleAttributions:$saleAttributions},checkpointData:$checkpointData,queueToken:$queueToken,changesetTokens"
		":$changesetTokens}){__typename result{...on NegotiationResultAvailable{queueToken buyerProposal{...BuyerProposalDetails __typename}sellerProposal{...ProposalDetails __typename}__typename}...on CheckpointDenied{redirectUrl __typename}...on Throttled{pollAfter queueToken pollUrl __typename}...on SubmittedForCompletion{receipt{...ReceiptDetails __typename}__typename}...on NegotiationResultFailed{__typename}__typename}errors{code localizedMessage nonLocalizedMessage localizedMessageHtml...on "
		"RemoveTermViolation{target __typename}...on AcceptNewTermViolation{target __typename}...on ConfirmChangeViolation{from to __typename}...on UnprocessableTermViolation{target __typename}...on UnresolvableTermViolation{target __typename}...on ApplyChangeViolation{target from{...on ApplyChangeValueInt{value __typename}...on ApplyChangeValueRemoval{value __typename}...on ApplyChangeValueString{value __typename}__typename}to{...on ApplyChangeValueInt{value __typename}...on ApplyChangeValueRemoval{value "
		"__typename}...on ApplyChangeValueString{value __typename}__typename}__typename}...on GenericError{__typename}__typename}}__typename}}fragment BuyerProposalDetails on Proposal{merchandiseDiscount{...ProposalDiscountFragment __typename}deliveryDiscount{...ProposalDiscountFragment __typename}delivery{...ProposalDeliveryFragment __typename}merchandise{...on FilledMerchandiseTerms{taxesIncluded merchandiseLines{stableId merchandise"
		"{...SourceProvidedMerchandise...ProductVariantMerchandiseDetails...ContextualizedProductVariantMerchandiseDetails...on MissingProductVariantMerchandise{id digest variantId __typename}__typename}quantity{...on ProposalMerchandiseQuantityByItem{items{...on IntValueConstraint{value __typename}__typename}__typename}__typename}totalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}recurringTotal{title interval intervalCount recurringPrice{amount currencyCode "
		"__typename}fixedPrice{amount currencyCode __typename}fixedPriceCount __typename}lineAllocations{...LineAllocationDetails __typename}lineComponentsSource lineComponents{...MerchandiseBundleLineComponent __typename}__typename}__typename}__typename}runningTotal{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}total{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}checkoutTotalBeforeTaxesAndShipping{...on MoneyValueConstraint"
		"{value{amount currencyCode __typename}__typename}__typename}checkoutTotalTaxes{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}checkoutTotal{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}deferredTotal{amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}subtotalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}taxes{...on "
		"MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}dueAt __typename}hasOnlyDeferredShipping subtotalBeforeTaxesAndShipping{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}attribution{attributions{...on AttributionItem{...on RetailAttributions{deviceId locationId userId __typename}...on DraftOrderAttributions{userIdentifier:userId sourceName locationIdentifier:locationId __typename}__typename}__typename}__typename}saleAttributions"
		"{attributions{...on SaleAttribution{recipient{...on StaffMember{id __typename}...on Location{id __typename}...on PointOfSaleDevice{id __typename}__typename}targetMerchandiseLines{...FilledMerchandiseLineTargetCollectionFragment...on AnyMerchandiseLineTargetCollection{any __typename}__typename}__typename}__typename}__typename}__typename}fragment ProposalDiscountFragment on DiscountTermsV2{__typename...on FilledDiscountTerms{acceptUnexpectedDiscounts lines{...DiscountLineDetailsFragment __typename}"
		"__typename}...on PendingTerms{pollDelay taskId __typename}...on UnavailableTerms{__typename}}fragment DiscountLineDetailsFragment on DiscountLine{allocations{...on DiscountAllocatedAllocationSet{__typename allocations{amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}target{index targetType stableId __typename}__typename}}__typename}discount{...DiscountDetailsFragment __typename}lineAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}"
		"__typename}__typename}__typename}fragment DiscountDetailsFragment on Discount{...on CustomDiscount{title presentationLevel allocationMethod targetSelection targetType signature signatureUuid type value{...on PercentageValue{percentage __typename}...on FixedAmountValue{appliesOnEachItem fixedAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}...on CodeDiscount{title code presentationLevel allocationMethod targetSelection "
		"targetType value{...on PercentageValue{percentage __typename}...on FixedAmountValue{appliesOnEachItem fixedAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}...on DiscountCodeTrigger{code __typename}...on AutomaticDiscount{presentationLevel title allocationMethod targetSelection targetType value{...on PercentageValue{percentage __typename}...on FixedAmountValue{appliesOnEachItem fixedAmount{...on MoneyValueConstraint{value"
		"{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}__typename}fragment ProposalDeliveryFragment on DeliveryTerms{__typename...on FilledDeliveryTerms{intermediateRates progressiveRatesEstimatedTimeUntilCompletion shippingRatesStatusToken deliveryLines{destinationAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on Geolocation{country{code"
		" __typename}zone{code __typename}coordinates{latitude longitude __typename}postalCode __typename}...on PartialStreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode phone coordinates{latitude longitude __typename}__typename}__typename}targetMerchandise{...FilledMerchandiseLineTargetCollectionFragment __typename}groupType selectedDeliveryStrategy{...on CompleteDeliveryStrategy{handle __typename}...on DeliveryStrategyReference{handle __typename}"
		"__typename}availableDeliveryStrategies{...on CompleteDeliveryStrategy{title handle custom description code acceptsInstructions phoneRequired methodType carrierName incoterms brandedPromise{logoUrl name __typename}deliveryStrategyBreakdown{amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}discountRecurringCycleLimit excludeFromDeliveryOptionPrice targetMerchandise{...FilledMerchandiseLineTargetCollectionFragment __typename}__typename}minDeliveryDateTime "
		"maxDeliveryDateTime deliveryPromisePresentmentTitle{short long __typename}displayCheckoutRedesign estimatedTimeInTransit{...on IntIntervalConstraint{lowerBound upperBound __typename}...on IntValueConstraint{value __typename}__typename}amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}amountAfterDiscounts{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}pickupLocation{...on PickupInStoreLocation{address{address1 "
		"address2 city countryCode phone postalCode zoneCode __typename}instructions name __typename}...on PickupPointLocation{address{address1 address2 address3 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}__typename}businessHours{day openingTime closingTime __typename}carrierCode carrierName handle kind name carrierLogoUrl fromDeliveryOptionGenerator __typename}__typename}__typename}__typename}__typename}__typename}...on PendingTerms{pollDelay taskId __typename}...on "
		"UnavailableTerms{__typename}}fragment FilledMerchandiseLineTargetCollectionFragment on FilledMerchandiseLineTargetCollection{linesV2{...on MerchandiseLine{stableId quantity{...on ProposalMerchandiseQuantityByItem{items{...on IntValueConstraint{value __typename}__typename}__typename}__typename}merchandise{...MerchandiseFragment __typename}totalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}...on MerchandiseBundleLineComponent{stableId "
		"quantity{...on ProposalMerchandiseQuantityByItem{items{...on IntValueConstraint{value __typename}__typename}__typename}__typename}merchandise{...MerchandiseFragment __typename}totalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}fragment MerchandiseFragment on ProposalMerchandise{...SourceProvidedMerchandise...on ProductVariantMerchandise{id digest variantId title subtitle image{altText one:url(transform:{maxWidth:64,"
		"maxHeight:64})two:url(transform:{maxWidth:128,maxHeight:128})four:url(transform:{maxWidth:256,maxHeight:256})__typename}requiresShipping properties{...MerchandiseProperties __typename}__typename}...on ContextualizedProductVariantMerchandise{id digest variantId title subtitle image{altText one:url(transform:{maxWidth:64,maxHeight:64})two:url(transform:{maxWidth:128,maxHeight:128})four:url(transform:{maxWidth:256,maxHeight:256})__typename}requiresShipping sellingPlan{id digest name prepaid "
		"deliveriesPerBillingCycle subscriptionDetails{billingInterval billingIntervalCount billingMaxCycles deliveryInterval deliveryIntervalCount __typename}__typename}properties{...MerchandiseProperties __typename}__typename}...on MissingProductVariantMerchandise{id digest variantId __typename}__typename}fragment SourceProvidedMerchandise on Merchandise{...on SourceProvidedMerchandise{__typename product{id title productType vendor __typename}productUrl digest variantId optionalIdentifier title "
		"untranslatedTitle subtitle untranslatedSubtitle taxable giftCard requiresShipping price{amount currencyCode __typename}deferredAmount{amount currencyCode __typename}image{altText one:transformedSrc(maxWidth:64,maxHeight:64)two:transformedSrc(maxWidth:128,maxHeight:128)four:transformedSrc(maxWidth:256,maxHeight:256)__typename}options{name value __typename}properties{...MerchandiseProperties __typename}taxCode taxesIncluded weight{value unit __typename}sku}__typename}fragment MerchandiseProperties "
		"on MerchandiseProperty{name value{...on MerchandisePropertyValueString{string:value __typename}...on MerchandisePropertyValueInt{int:value __typename}...on MerchandisePropertyValueFloat{float:value __typename}...on MerchandisePropertyValueBoolean{boolean:value __typename}...on MerchandisePropertyValueJson{json:value __typename}__typename}visible __typename}fragment ProductVariantMerchandiseDetails on ProductVariantMerchandise{id digest variantId title untranslatedTitle subtitle "
		"untranslatedSubtitle product{id vendor productType __typename}productUrl image{altText one:transformedSrc(maxWidth:64,maxHeight:64)two:transformedSrc(maxWidth:128,maxHeight:128)four:transformedSrc(maxWidth:256,maxHeight:256)__typename}properties{...MerchandiseProperties __typename}requiresShipping options{name value __typename}sellingPlan{id subscriptionDetails{billingInterval __typename}__typename}giftCard __typename}fragment ContextualizedProductVariantMerchandiseDetails on "
		"ContextualizedProductVariantMerchandise{id digest variantId title untranslatedTitle subtitle untranslatedSubtitle sku price{amount currencyCode __typename}product{id vendor productType __typename}productUrl image{altText one:transformedSrc(maxWidth:64,maxHeight:64)two:transformedSrc(maxWidth:128,maxHeight:128)four:transformedSrc(maxWidth:256,maxHeight:256)__typename}properties{...MerchandiseProperties __typename}requiresShipping options{name value __typename}sellingPlan{name id digest "
		"deliveriesPerBillingCycle prepaid subscriptionDetails{billingInterval billingIntervalCount billingMaxCycles deliveryInterval deliveryIntervalCount __typename}__typename}giftCard deferredAmount{amount currencyCode __typename}__typename}fragment LineAllocationDetails on LineAllocation{stableId quantity totalAmountBeforeReductions{amount currencyCode __typename}totalAmountAfterDiscounts{amount currencyCode __typename}totalAmountAfterLineDiscounts{amount currencyCode __typename}"
		"checkoutPriceAfterDiscounts{amount currencyCode __typename}checkoutPriceAfterLineDiscounts{amount currencyCode __typename}checkoutPriceBeforeReductions{amount currencyCode __typename}unitPrice{price{amount currencyCode __typename}measurement{referenceUnit referenceValue __typename}__typename}allocations{...on LineComponentDiscountAllocation{allocation{amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}amount{amount currencyCode __typename}"
		"discount{...DiscountDetailsFragment __typename}__typename}__typename}__typename}fragment MerchandiseBundleLineComponent on MerchandiseBundleLineComponent{__typename stableId merchandise{...SourceProvidedMerchandise...ProductVariantMerchandiseDetails...ContextualizedProductVariantMerchandiseDetails...on MissingProductVariantMerchandise{id digest variantId __typename}__typename}quantity{...on ProposalMerchandiseQuantityByItem{items{...on IntValueConstraint{value __typename}__typename}__typename}"
		"__typename}totalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}recurringTotal{title interval intervalCount recurringPrice{amount currencyCode __typename}fixedPrice{amount currencyCode __typename}fixedPriceCount __typename}lineAllocations{...LineAllocationDetails __typename}}fragment ProposalDetails on Proposal{merchandiseDiscount{...ProposalDiscountFragment __typename}deliveryDiscount{...ProposalDiscountFragment __typename}deliveryExpectations"
		"{...ProposalDeliveryExpectationFragment __typename}availableRedeemables{...on PendingTerms{taskId pollDelay __typename}...on AvailableRedeemables{availableRedeemables{paymentMethod{...RedeemablePaymentMethodFragment __typename}balance{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}delivery{...on FilledDeliveryTerms{intermediateRates progressiveRatesEstimatedTimeUntilCompletion shippingRatesStatusToken deliveryLines{id "
		"availableOn destinationAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on Geolocation{country{code __typename}zone{code __typename}coordinates{latitude longitude __typename}postalCode __typename}...on PartialStreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode phone coordinates{latitude longitude __typename}__typename}"
		"__typename}targetMerchandise{...FilledMerchandiseLineTargetCollectionFragment __typename}groupType selectedDeliveryStrategy{...on CompleteDeliveryStrategy{handle __typename}__typename}availableDeliveryStrategies{...on CompleteDeliveryStrategy{originLocation{id __typename}title handle custom description code acceptsInstructions phoneRequired methodType carrierName incoterms brandedPromise{logoUrl name __typename}deliveryStrategyBreakdown{amount{...on MoneyValueConstraint{value{amount currencyCode "
		"__typename}__typename}__typename}discountRecurringCycleLimit excludeFromDeliveryOptionPrice targetMerchandise{...FilledMerchandiseLineTargetCollectionFragment __typename}__typename}minDeliveryDateTime maxDeliveryDateTime deliveryPromiseProviderApiClientId deliveryPromisePresentmentTitle{short long __typename}displayCheckoutRedesign estimatedTimeInTransit{...on IntIntervalConstraint{lowerBound upperBound __typename}...on IntValueConstraint{value __typename}__typename}amount{...on "
		"MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}amountAfterDiscounts{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}pickupLocation{...on PickupInStoreLocation{address{address1 address2 city countryCode phone postalCode zoneCode __typename}instructions name distanceFromBuyer{unit value __typename}__typename}...on PickupPointLocation{address{address1 address2 address3 city countryCode zoneCode postalCode coordinates{latitude "
		"longitude __typename}__typename}businessHours{day openingTime closingTime __typename}carrierCode carrierName handle kind name carrierLogoUrl fromDeliveryOptionGenerator __typename}__typename}__typename}__typename}__typename}simpleDeliveryLine{availableDeliveryStrategies{title amountAfterDiscounts{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}deliveryPromisePresentmentTitle{short long __typename}__typename}__typename}__typename}...on PendingTerms{pollDelay "
		"taskId __typename}...on UnavailableTerms{__typename}__typename}payment{...on FilledPaymentTerms{availablePayments{paymentMethod{...on AnyDirectPaymentMethod{__typename availablePaymentProviders{paymentMethodIdentifier name brands orderingIndex displayName extensibilityDisplayName availablePresentmentCurrencies paymentMethodUiExtension{...UiExtensionInstallationFragment __typename}checkoutHostedFields alternative __typename}}...on AnyOffsitePaymentMethod{__typename availableOffsiteProviders"
		"{__typename paymentMethodIdentifier name paymentBrands orderingIndex showRedirectionNotice availablePresentmentCurrencies}}...on AnyCustomOnsitePaymentMethod{__typename availableCustomOnsiteProviders{__typename paymentMethodIdentifier name paymentBrands orderingIndex availablePresentmentCurrencies paymentMethodUiExtension{...UiExtensionInstallationFragment __typename}}}...on DirectPaymentMethod{__typename paymentMethodIdentifier}...on GiftCardPaymentMethod{__typename}...on "
		"AnyRedeemablePaymentMethod{__typename availableRedemptionConfigs{__typename...on CustomRedemptionConfig{paymentMethodIdentifier paymentMethodUiExtension{...UiExtensionInstallationFragment __typename}__typename}}orderingIndex}...on WalletsPlatformConfiguration{name configurationParams __typename}...on AnyWalletPaymentMethod{availableWalletPaymentConfigs{...on PaypalWalletConfig{__typename name clientId merchantId venmoEnabled payflow paymentIntent paymentMethodIdentifier orderingIndex}...on "
		"ShopPayWalletConfig{__typename name storefrontUrl paymentMethodIdentifier orderingIndex}...on ShopifyInstallmentsWalletConfig{__typename name availableLoanTypes maxPrice{amount currencyCode __typename}minPrice{amount currencyCode __typename}supportedCountries supportedCurrencies giftCardsNotAllowed subscriptionItemsNotAllowed ineligibleTestModeCheckout ineligibleLineItem paymentMethodIdentifier orderingIndex}...on FacebookPayWalletConfig{__typename name partnerId partnerMerchantId "
		"supportedContainers acquirerCountryCode mode paymentMethodIdentifier orderingIndex}...on ApplePayWalletConfig{__typename name supportedNetworks walletAuthenticationToken walletOrderTypeIdentifier walletServiceUrl paymentMethodIdentifier orderingIndex}...on GooglePayWalletConfig{__typename name allowedAuthMethods allowedCardNetworks gateway gatewayMerchantId merchantId authJwt environment paymentMethodIdentifier orderingIndex}...on AmazonPayClassicWalletConfig{__typename name orderingIndex}"
		"__typename}__typename}...on LocalPaymentMethodConfig{__typename paymentMethodIdentifier name displayName additionalParameters{...on IdealBankSelectionParameterConfig{__typename label options{label value __typename}}__typename}orderingIndex}...on AnyPaymentOnDeliveryMethod{__typename additionalDetails paymentInstructions paymentMethodIdentifier orderingIndex displayName availablePresentmentCurrencies}...on PaymentOnDeliveryMethod{__typename additionalDetails paymentInstructions "
		"paymentMethodIdentifier}...on CustomPaymentMethod{id name additionalDetails paymentInstructions __typename}...on ManualPaymentMethodConfig{id name additionalDetails paymentInstructions paymentMethodIdentifier orderingIndex availablePresentmentCurrencies __typename}...on CustomPaymentMethodConfig{id name additionalDetails paymentInstructions paymentMethodIdentifier orderingIndex availablePresentmentCurrencies __typename}...on DeferredPaymentMethod{orderingIndex displayName __typename}...on "
		"NoopPaymentMethod{__typename}...on GiftCardPaymentMethod{__typename}...on CustomerCreditCardPaymentMethod{__typename expired expiryMonth expiryYear name orderingIndex...CustomerCreditCardPaymentMethodFragment}...on PaypalBillingAgreementPaymentMethod{__typename orderingIndex paypalAccountEmail...PaypalBillingAgreementPaymentMethodFragment}__typename}__typename}paymentLines{...PaymentLines __typename}billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode "
		"zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}paymentFlexibilityPaymentTermsTemplate{id translatedName dueDate dueInDays type __typename}__typename}...on PendingTerms{pollDelay __typename}...on UnavailableTerms{__typename}__typename}poNumber merchandise{...on FilledMerchandiseTerms{taxesIncluded merchandiseLines{stableId merchandise{...SourceProvidedMerchandise...ProductVariantMerchandiseDetails...ContextualizedProductVariantMerchandiseDetails...on "
		"MissingProductVariantMerchandise{id digest variantId __typename}__typename}quantity{...on ProposalMerchandiseQuantityByItem{items{...on IntValueConstraint{value __typename}__typename}__typename}__typename}totalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}recurringTotal{title interval intervalCount recurringPrice{amount currencyCode __typename}fixedPrice{amount currencyCode __typename}fixedPriceCount __typename}lineAllocations{...LineAllocationDetails"
		" __typename}lineComponentsSource lineComponents{...MerchandiseBundleLineComponent __typename}__typename}__typename}__typename}note{customAttributes{key value __typename}message __typename}scriptFingerprint{signature signatureUuid lineItemScriptChanges paymentScriptChanges shippingScriptChanges __typename}transformerFingerprintV2 buyerIdentity{...on FilledBuyerIdentityTerms{buyerIdentity{...on GuestProfile{presentmentCurrency countryCode market{id handle __typename}__typename}...on CustomerProfile"
		"{id presentmentCurrency fullName firstName lastName countryCode market{id handle __typename}email imageUrl acceptsMarketing acceptsSmsMarketing acceptsEmailMarketing ordersCount phone billingAddresses{id default address{firstName lastName address1 address2 phone postalCode city company zoneCode countryCode label __typename}__typename}shippingAddresses{id default address{firstName lastName address1 address2 phone postalCode city company zoneCode countryCode label __typename}__typename}"
		"storeCreditAccounts{id balance{amount currencyCode __typename}__typename}__typename}...on BusinessCustomerProfile{checkoutExperienceConfiguration{editableShippingAddress __typename}id presentmentCurrency fullName firstName lastName acceptsMarketing acceptsSmsMarketing acceptsEmailMarketing company{id name externalId __typename}countryCode imageUrl market{id handle __typename}email ordersCount phone selectedCompanyLocation{id name externalId __typename}locationCount billingAddress{firstName "
		"lastName address1 address2 phone postalCode city company zoneCode countryCode label __typename}shippingAddress{firstName lastName address1 address2 phone postalCode city company zoneCode countryCode label __typename}__typename}__typename}contactInfoV2{...on EmailFormContents{email __typename}...on SMSFormContents{phoneNumber __typename}__typename}marketingConsent{...on SMSMarketingConsent{value __typename}...on EmailMarketingConsent{value __typename}__typename}shopPayOptInPhone __typename}"
		"__typename}checkoutCompletionTarget recurringTotals{title interval intervalCount recurringPrice{amount currencyCode __typename}fixedPrice{amount currencyCode __typename}fixedPriceCount __typename}subtotalBeforeTaxesAndShipping{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}totalSavings{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}runningTotal{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}"
		"__typename}total{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}checkoutTotalBeforeTaxesAndShipping{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}checkoutTotalTaxes{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}checkoutTotal{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}deferredTotal{amount{...on MoneyValueConstraint{value{amount "
		"currencyCode __typename}__typename}__typename}subtotalAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}taxes{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}dueAt __typename}hasOnlyDeferredShipping subtotalBeforeReductions{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}duty{...on FilledDutyTerms{totalDutyAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}"
		"__typename}__typename}totalTaxAndDutyAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}totalAdditionalFeesAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}...on PendingTerms{pollDelay __typename}...on UnavailableTerms{__typename}__typename}tax{...on FilledTaxTerms{totalTaxAmount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}totalTaxAndDutyAmount{...on "
		"MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}totalAmountIncludedInTarget{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}exemptions{taxExemptionReason targets{...on TargetAllLines{__typename}__typename}__typename}__typename}...on PendingTerms{pollDelay __typename}...on UnavailableTerms{__typename}__typename}tip{tipSuggestions{...on TipSuggestion{__typename percentage amount{...on MoneyValueConstraint{value{amount currencyCode"
		" __typename}__typename}__typename}}__typename}terms{...on FilledTipTerms{tipLines{amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}__typename}__typename}__typename}__typename}localizationExtension{...on LocalizationExtension{fields{...on LocalizationExtensionField{key title value __typename}__typename}__typename}__typename}landedCostDetails{incotermInformation{incoterm reason __typename}__typename}dutiesIncluded nonNegotiableTerms{signature contents"
		"{signature targetTerms targetLine{allLines index __typename}attributes __typename}__typename}optionalDuties{buyerRefusesDuties refuseDutiesPermitted __typename}attribution{attributions{...on AttributionItem{...on RetailAttributions{deviceId locationId userId __typename}...on DraftOrderAttributions{userIdentifier:userId sourceName locationIdentifier:locationId __typename}__typename}__typename}__typename}saleAttributions{attributions{...on SaleAttribution{recipient{...on StaffMember{id __typename}"
		"...on Location{id __typename}...on PointOfSaleDevice{id __typename}__typename}targetMerchandiseLines{...FilledMerchandiseLineTargetCollectionFragment...on AnyMerchandiseLineTargetCollection{any __typename}__typename}__typename}__typename}__typename}managedByMarketsPro captcha{...on Captcha{provider challenge sitekey token __typename}...on PendingTerms{taskId pollDelay __typename}__typename}cartCheckoutValidation{...on PendingTerms{taskId pollDelay __typename}__typename}alternativePaymentCurrency"
		"{...on AllocatedAlternativePaymentCurrencyTotal{total{amount currencyCode __typename}paymentLineAllocations{amount{amount currencyCode __typename}stableId __typename}__typename}__typename}__typename}fragment ProposalDeliveryExpectationFragment on DeliveryExpectationTerms{__typename...on FilledDeliveryExpectationTerms{deliveryExpectations{minDeliveryDateTime maxDeliveryDateTime deliveryStrategyHandle brandedPromise{logoUrl name __typename}deliveryOptionHandle deliveryExpectationPresentmentTitle"
		"{short long __typename}promiseProviderApiClientId __typename}__typename}...on PendingTerms{pollDelay taskId __typename}...on UnavailableTerms{__typename}}fragment RedeemablePaymentMethodFragment on RedeemablePaymentMethod{redemptionSource redemptionContent{...on ShopCashRedemptionContent{billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}__typename}redemptionId destinationAmount{amount currencyCode __typename}"
		"sourceAmount{amount currencyCode __typename}__typename}...on StoreCreditRedemptionContent{storeCreditAccountId __typename}...on CustomRedemptionContent{redemptionAttributes{key value __typename}maskedIdentifier paymentMethodIdentifier __typename}__typename}__typename}fragment UiExtensionInstallationFragment on UiExtensionInstallation{extension{approvalScopes{handle __typename}capabilities{apiAccess networkAccess blockProgress collectBuyerConsent{smsMarketing customerPrivacy __typename}__typename}"
		"appId extensionLocale extensionPoints translations scriptUrl uuid registrationUuid version apiVersion __typename}__typename}fragment CustomerCreditCardPaymentMethodFragment on CustomerCreditCardPaymentMethod{cvvSessionId paymentMethodIdentifier token displayLastDigits brand defaultPaymentMethod deletable requiresCvvConfirmation billingAddress{...on StreetAddress{address1 address2 city company countryCode firstName lastName phone postalCode zoneCode __typename}__typename}__typename}fragment "
		"PaypalBillingAgreementPaymentMethodFragment on PaypalBillingAgreementPaymentMethod{paymentMethodIdentifier token billingAddress{...on StreetAddress{address1 address2 city company countryCode firstName lastName phone postalCode zoneCode __typename}__typename}__typename}fragment PaymentLines on PaymentLine{stableId specialInstructions amount{...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}__typename}dueAt paymentMethod{...on DirectPaymentMethod{sessionId "
		"paymentMethodIdentifier creditCard{...on CreditCard{brand lastDigits name __typename}__typename}paymentAttributes __typename}...on GiftCardPaymentMethod{code balance{amount currencyCode __typename}__typename}...on RedeemablePaymentMethod{...RedeemablePaymentMethodFragment __typename}...on WalletsPlatformPaymentMethod{name walletParams __typename}...on WalletPaymentMethod{name walletContent{...on ShopPayWalletContent{billingAddress{...on StreetAddress{firstName lastName company address1 address2 "
		"city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}sessionToken paymentMethodIdentifier __typename}...on PaypalWalletContent{paypalBillingAddress:billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}email payerId token paymentMethodIdentifier acceptedSubscriptionTerms expiresAt __typename}...on ApplePayWalletContent"
		"{data signature version lastDigits paymentMethodIdentifier header{applicationData ephemeralPublicKey publicKeyHash transactionId __typename}__typename}...on GooglePayWalletContent{signature signedMessage protocolVersion paymentMethodIdentifier __typename}...on FacebookPayWalletContent{billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}containerData containerId mode "
		"paymentMethodIdentifier __typename}...on ShopifyInstallmentsWalletContent{autoPayEnabled billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}disclosureDetails{evidence id type __typename}installmentsToken sessionToken paymentMethodIdentifier __typename}__typename}__typename}...on LocalPaymentMethod{paymentMethodIdentifier name additionalParameters{...on "
		"IdealPaymentMethodParameters{bank __typename}__typename}__typename}...on PaymentOnDeliveryMethod{additionalDetails paymentInstructions paymentMethodIdentifier __typename}...on OffsitePaymentMethod{paymentMethodIdentifier name __typename}...on CustomPaymentMethod{id name additionalDetails paymentInstructions paymentMethodIdentifier __typename}...on CustomOnsitePaymentMethod{paymentMethodIdentifier name paymentAttributes __typename}...on ManualPaymentMethod{id name paymentMethodIdentifier __typename"
		"}...on DeferredPaymentMethod{orderingIndex displayName __typename}...on CustomerCreditCardPaymentMethod{...CustomerCreditCardPaymentMethodFragment __typename}...on PaypalBillingAgreementPaymentMethod{...PaypalBillingAgreementPaymentMethodFragment __typename}...on NoopPaymentMethod{__typename}__typename}__typename}fragment ReceiptDetails on Receipt{...on ProcessedReceipt{id token redirectUrl analytics{checkoutCompletedEventId __typename}poNumber orderIdentity{buyerIdentifier id __typename}"
		"eligibleForMarketingOptIn purchaseOrder{...ReceiptPurchaseOrder __typename}orderCreationStatus{__typename}paymentDetails{paymentCardBrand creditCardLastFourDigits paymentAmount{amount currencyCode __typename}paymentGateway financialPendingReason paymentDescriptor __typename}shopAppLinksAndResources{mobileUrl qrCodeUrl canTrackOrderUpdates shopInstallmentsViewSchedules shopInstallmentsMobileUrl installmentsHighlightEligible mobileUrlAttributionPayload shopAppEligible shopAppQrCodeKillswitch "
		"shopPayOrder buyerHasShopApp buyerHasShopPay orderUpdateOptions __typename}postPurchasePageUrl postPurchasePageRequested postPurchaseVaultedPaymentMethodStatus paymentFlexibilityPaymentTermsTemplate{__typename dueDate dueInDays id translatedName type}__typename}...on ProcessingReceipt{id pollDelay __typename}...on ActionRequiredReceipt{id action{...on CompletePaymentChallenge{offsiteRedirect url __typename}__typename}timeout{millisecondsRemaining __typename}__typename}...on FailedReceipt{id "
		"processingError{...on InventoryClaimFailure{__typename}...on InventoryReservationFailure{__typename}...on OrderCreationFailure{paymentsHaveBeenReverted __typename}...on OrderCreationSchedulingFailure{__typename}...on PaymentFailed{code messageUntranslated hasOffsitePaymentMethod __typename}...on DiscountUsageLimitExceededFailure{__typename}...on CustomerPersistenceFailure{__typename}__typename}__typename}__typename}fragment ReceiptPurchaseOrder on PurchaseOrder{__typename sessionToken "
		"totalAmountToPay{amount currencyCode __typename}checkoutCompletionTarget delivery{...on PurchaseOrderDeliveryTerms{deliveryLines{__typename deliveryStrategy{handle title description methodType brandedPromise{handle logoUrl name __typename}pickupLocation{...on PickupInStoreLocation{name address{address1 address2 city countryCode zoneCode postalCode phone coordinates{latitude longitude __typename}__typename}instructions __typename}...on PickupPointLocation{carrierCode carrierName name carrierLogoUrl"
		" fromDeliveryOptionGenerator __typename}__typename}__typename}lineAmount{amount currencyCode __typename}lineAmountAfterDiscounts{amount currencyCode __typename}destinationAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}__typename}groupType targetMerchandise{...on PurchaseOrderMerchandiseLine{stableId merchandise{...on ProductVariantSnapshot"
		"{...ProductVariantSnapshotMerchandiseDetails __typename}__typename}__typename}...on PurchaseOrderBundleLineComponent{stableId merchandise{...on ProductVariantSnapshot{...ProductVariantSnapshotMerchandiseDetails __typename}__typename}__typename}__typename}}__typename}__typename}payment{...on PurchaseOrderPaymentTerms{billingAddress{__typename...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone "
		"__typename}...on InvalidBillingAddress{__typename}}paymentLines{amount{amount currencyCode __typename}postPaymentMessage dueAt paymentMethod{...on DirectPaymentMethod{sessionId paymentMethodIdentifier vaultingAgreement creditCard{brand lastDigits __typename}billingAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}__typename}"
		"...on CustomerCreditCardPaymentMethod{brand displayLastDigits token deletable defaultPaymentMethod requiresCvvConfirmation billingAddress{...on StreetAddress{address1 address2 city company countryCode firstName lastName phone postalCode zoneCode __typename}__typename}__typename}...on PurchaseOrderGiftCardPaymentMethod{balance{amount currencyCode __typename}code __typename}...on WalletPaymentMethod{name walletContent{...on ShopPayWalletContent{billingAddress{...on StreetAddress{firstName lastName "
		"company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}sessionToken paymentMethodIdentifier __typename}...on PaypalWalletContent{billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}email payerId token expiresAt __typename}...on ApplePayWalletContent{billingAddress{...on StreetAddress{firstName "
		"lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}data signature version __typename}...on GooglePayWalletContent{billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}signature signedMessage protocolVersion __typename}...on FacebookPayWalletContent{billingAddress{...on StreetAddress"
		"{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}containerData containerId mode __typename}...on ShopifyInstallmentsWalletContent{autoPayEnabled billingAddress{...on StreetAddress{firstName lastName company address1 address2 city countryCode zoneCode postalCode phone __typename}...on InvalidBillingAddress{__typename}__typename}disclosureDetails{evidence id type __typename}installmentsToken "
		"sessionToken creditCard{brand lastDigits __typename}__typename}__typename}__typename}...on WalletsPlatformPaymentMethod{name walletParams __typename}...on LocalPaymentMethod{paymentMethodIdentifier name displayName billingAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}additionalParameters{...on IdealPaymentMethodParameters"
		"{bank __typename}__typename}__typename}...on PaymentOnDeliveryMethod{additionalDetails paymentInstructions paymentMethodIdentifier billingAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}__typename}...on OffsitePaymentMethod{paymentMethodIdentifier name billingAddress{...on StreetAddress{name firstName lastName company "
		"address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}__typename}...on ManualPaymentMethod{additionalDetails name paymentInstructions id paymentMethodIdentifier billingAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}"
		"__typename}...on CustomPaymentMethod{additionalDetails name paymentInstructions id paymentMethodIdentifier billingAddress{...on StreetAddress{name firstName lastName company address1 address2 city countryCode zoneCode postalCode coordinates{latitude longitude __typename}phone __typename}...on InvalidBillingAddress{__typename}__typename}__typename}...on DeferredPaymentMethod{orderingIndex displayName __typename}...on PaypalBillingAgreementPaymentMethod{token billingAddress{...on StreetAddress"
		"{address1 address2 city company countryCode firstName lastName phone postalCode zoneCode __typename}__typename}__typename}...on RedeemablePaymentMethod{redemptionSource redemptionContent{...on CustomRedemptionContent{redemptionAttributes{key value __typename}maskedIdentifier paymentMethodIdentifier __typename}...on StoreCreditRedemptionContent{storeCreditAccountId __typename}__typename}__typename}...on CustomOnsitePaymentMethod{paymentMethodIdentifier name __typename}__typename}__typename}"
		"__typename}__typename}buyerIdentity{...on PurchaseOrderBuyerIdentityTerms{contactMethod{...on PurchaseOrderEmailContactMethod{email __typename}...on PurchaseOrderSMSContactMethod{phoneNumber __typename}__typename}marketingConsent{...on PurchaseOrderEmailContactMethod{email __typename}...on PurchaseOrderSMSContactMethod{phoneNumber __typename}__typename}__typename}buyerIdentity{__typename...on GuestProfile{presentmentCurrency countryCode market{id handle __typename}__typename}...on "
		"DecodedCustomerProfile{id presentmentCurrency fullName firstName lastName countryCode email imageUrl acceptsMarketing acceptsSmsMarketing acceptsEmailMarketing ordersCount phone __typename}...on BusinessCustomerProfile{checkoutExperienceConfiguration{editableShippingAddress __typename}id presentmentCurrency fullName firstName lastName acceptsMarketing acceptsSmsMarketing acceptsEmailMarketing countryCode imageUrl email ordersCount phone selectedCompanyLocation{id name externalId __typename}"
		"locationCount company{id name externalId __typename}market{id handle __typename}__typename}}__typename}merchandise{merchandiseLines{stableId merchandise{...ProductVariantSnapshotMerchandiseDetails __typename}lineAllocations{checkoutPriceAfterDiscounts{amount currencyCode __typename}checkoutPriceAfterLineDiscounts{amount currencyCode __typename}checkoutPriceBeforeReductions{amount currencyCode __typename}quantity stableId totalAmountAfterDiscounts{amount currencyCode __typename}"
		"totalAmountAfterLineDiscounts{amount currencyCode __typename}totalAmountBeforeReductions{amount currencyCode __typename}discountAllocations{__typename amount{amount currencyCode __typename}discount{...DiscountDetailsFragment __typename}}unitPrice{measurement{referenceUnit referenceValue __typename}price{amount currencyCode __typename}__typename}__typename}lineComponents{...PurchaseOrderBundleLineComponent __typename}quantity{__typename...on PurchaseOrderMerchandiseQuantityByItem{items __typename}}"
		"recurringTotal{fixedPrice{__typename amount currencyCode}fixedPriceCount interval intervalCount recurringPrice{__typename amount currencyCode}title __typename}lineAmount{__typename amount currencyCode}__typename}__typename}tax{totalTaxAmountV2{__typename amount currencyCode}totalDutyAmount{amount currencyCode __typename}totalTaxAndDutyAmount{amount currencyCode __typename}totalAmountIncludedInTarget{amount currencyCode __typename}__typename}discounts{lines{...PurchaseOrderDiscountLineFragment "
		"__typename}__typename}totalSavings{amount currencyCode __typename}subtotalBeforeTaxesAndShipping{amount currencyCode __typename}landedCostDetails{incotermInformation{incoterm reason __typename}__typename}optionalDuties{buyerRefusesDuties refuseDutiesPermitted __typename}tip{tipLines{amount{amount currencyCode __typename}__typename}__typename}hasOnlyDeferredShipping note{customAttributes{key value __typename}message __typename}shopPayArtifact{optIn{vaultPhone __typename}__typename}recurringTotals"
		"{fixedPrice{amount currencyCode __typename}fixedPriceCount interval intervalCount recurringPrice{amount currencyCode __typename}title __typename}checkoutTotalBeforeTaxesAndShipping{__typename amount currencyCode}checkoutTotal{__typename amount currencyCode}checkoutTotalTaxes{__typename amount currencyCode}subtotalBeforeReductions{__typename amount currencyCode}deferredTotal{amount{__typename...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}}dueAt subtotalAmount"
		"{__typename...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}}taxes{__typename...on MoneyValueConstraint{value{amount currencyCode __typename}__typename}}__typename}metafields{key namespace value valueType:type __typename}}fragment ProductVariantSnapshotMerchandiseDetails on ProductVariantSnapshot{variantId options{name value __typename}productTitle title productUrl untranslatedTitle untranslatedSubtitle sellingPlan{name id digest deliveriesPerBillingCycle prepaid "
		"subscriptionDetails{billingInterval billingIntervalCount billingMaxCycles deliveryInterval deliveryIntervalCount __typename}__typename}deferredAmount{amount currencyCode __typename}digest giftCard image{altText one:url(transform:{maxWidth:64,maxHeight:64})two:url(transform:{maxWidth:128,maxHeight:128})four:url(transform:{maxWidth:256,maxHeight:256})__typename}price{amount currencyCode __typename}productId productType properties{...MerchandiseProperties __typename}requiresShipping sku taxCode "
		"taxable vendor weight{unit value __typename}__typename}fragment PurchaseOrderBundleLineComponent on PurchaseOrderBundleLineComponent{stableId merchandise{...ProductVariantSnapshotMerchandiseDetails __typename}lineAllocations{checkoutPriceAfterDiscounts{amount currencyCode __typename}checkoutPriceAfterLineDiscounts{amount currencyCode __typename}checkoutPriceBeforeReductions{amount currencyCode __typename}quantity stableId totalAmountAfterDiscounts{amount currencyCode __typename}"
		"totalAmountAfterLineDiscounts{amount currencyCode __typename}totalAmountBeforeReductions{amount currencyCode __typename}discountAllocations{__typename amount{amount currencyCode __typename}discount{...DiscountDetailsFragment __typename}index}unitPrice{measurement{referenceUnit referenceValue __typename}price{amount currencyCode __typename}__typename}__typename}quantity recurringTotal{fixedPrice{__typename amount currencyCode}fixedPriceCount interval intervalCount recurringPrice{__typename amount "
		"currencyCode}title __typename}totalAmount{__typename amount currencyCode}__typename}fragment PurchaseOrderDiscountLineFragment on PurchaseOrderDiscountLine{discount{...DiscountDetailsFragment __typename}lineAmount{amount currencyCode __typename}deliveryAllocations{amount{amount currencyCode __typename}discount{...DiscountDetailsFragment __typename}index stableId targetType __typename}merchandiseAllocations{amount{amount currencyCode __typename}discount{...DiscountDetailsFragment __typename}index "
		"stableId targetType __typename}__typename}\",\"variables\":{\"checkpointData\":null,\"sessionInput\":{\"sessionToken\":\""
		"Z3drY2pjNjdoY3JnaXRIZjJlRUo3c25uT1pETjYwcDhraFZmVXdLb250SjJSR1ZUdm5GNWdsakxJUCtDaFl1UGUyeEFTd3oxS3owaldMRXE5M3ZTOXFNblVTei9yMlprK1Rmc0NHbzJ0dnE4Uk4xbllmaXdRWXZjVDZIUm1CTHIwZkVQalVrUituTXBFYkYyUnVpTkh2dHZRTTU5YXNOdnlZckkvanRxeURvVG5NVXNJM05aZUFaUUpjR3Bua3NNNVNjVzVlWmxGczVZQSt4bzZ6T3ZFc3pFbUFsSjl3cjdmT1p1dkdUaUZqTVRTTVV3amNvMXVkV3NCOXRuL2k3eWZHd2E0cnNVVDRDZ2FXdElEZU1DL0FGWDBvK2ZnRlFMcHFlTHJRPT0tLTRGejJDc0c2eGkrQVBiYy8tLUZ5dlJxeDdUdTZVM2llNFdEdnhub1E9PQ\"},\"queueToken\":\""
		"AgVvJ9WpLDScCE9nhbeQZ6bD3CZO1XVz4SkmjqAMSsmajo9cauHtXMQYLO2tRMfO2pIJuu9BB6-RTGaG-0yKENPuFtzPsd8wCUo6ZrquL_Zi0W-GufybMca9jVefH8YTLl3MhUDiL0SPcz1Nztik_R-r_eo8BtbfMfD2TrL_VSde-zFlCtrCyxab\",\"discounts\":{\"lines\":[],\"acceptUnexpectedDiscounts\":true},\"delivery\":{\"deliveryLines\":[{\"destination\":{\"partialStreetAddress\":{\"address1\":\"\",\"city\":\"\",\"countryCode\":\"IN\",\"firstName\":\"Brunda\",\"lastName\":\"M\",\"phone\":\"\"}},\"selectedDeliveryStrategy\":{\""
		"deliveryStrategyMatchingConditions\":{\"estimatedTimeInTransit\":{\"any\":true},\"shipments\":{\"any\":true}},\"options\":{}},\"targetMerchandiseLines\":{\"lines\":[]},\"deliveryMethodTypes\":[\"SHIPPING\",\"LOCAL\"],\"expectedTotalPrice\":{\"any\":true},\"destinationChanged\":false}],\"noDeliveryRequired\":[],\"useProgressiveRates\":false,\"prefetchShippingRatesStrategy\":null},\"merchandise\":{\"merchandiseLines\":[{\"stableId\":\"996c4214-16f1-4408-9f53-e03e2ab46a3d\",\"merchandise\":{\""
		"productVariantReference\":{\"id\":\"gid://shopify/ProductVariantMerchandise/42201877151919\",\"variantId\":\"gid://shopify/ProductVariant/42201877151919\",\"properties\":[],\"sellingPlanId\":null,\"sellingPlanDigest\":null}},\"quantity\":{\"items\":{\"value\":1}},\"expectedTotalPrice\":{\"value\":{\"amount\":\"360.00\",\"currencyCode\":\"INR\"}},\"lineComponentsSource\":null,\"lineComponents\":[]}]},\"payment\":{\"totalAmount\":{\"any\":true},\"paymentLines\":[{\"paymentMethod\":{\""
		"directPaymentMethod\":null,\"giftCardPaymentMethod\":null,\"redeemablePaymentMethod\":null,\"walletPaymentMethod\":null,\"walletsPlatformPaymentMethod\":null,\"localPaymentMethod\":null,\"paymentOnDeliveryMethod\":null,\"paymentOnDeliveryMethod2\":null,\"manualPaymentMethod\":null,\"customPaymentMethod\":null,\"offsitePaymentMethod\":{\"name\":\"Razorpay Secure (UPI, Cards, Wallets, NetBanking)\",\"paymentMethodIdentifier\":\"cf83441aff97efc7e5a42d8bd8e5bf14\",\"billingAddress\":{\"streetAddress\""
		":{\"address1\":\"\",\"city\":\"\",\"countryCode\":\"IN\",\"firstName\":\"Brunda\",\"lastName\":\"M\",\"phone\":\"\"}}},\"customOnsitePaymentMethod\":null,\"deferredPaymentMethod\":null,\"customerCreditCardPaymentMethod\":null,\"paypalBillingAgreementPaymentMethod\":null},\"amount\":{\"any\":true},\"dueAt\":null}],\"billingAddress\":{\"streetAddress\":{\"address1\":\"\",\"city\":\"\",\"countryCode\":\"IN\",\"firstName\":\"Brunda\",\"lastName\":\"M\",\"phone\":\"\"}}},\"buyerIdentity\":{\""
		"buyerIdentity\":{\"presentmentCurrency\":\"INR\",\"countryCode\":\"IN\"},\"contactInfoV2\":{\"emailOrSms\":{\"value\":\"brunda123@gmail.com\",\"emailOrSmsChanged\":false}},\"marketingConsent\":[{\"email\":{\"value\":\"brunda123@gmail.com\"}}],\"shopPayOptInPhone\":{\"countryCode\":\"IN\"}},\"tip\":{\"tipLines\":[]},\"poNumber\":null,\"taxes\":{\"proposedAllocations\":null,\"proposedTotalAmount\":{\"value\":{\"amount\":\"0\",\"currencyCode\":\"INR\"}},\"proposedTotalIncludedAmount\":null,\""
		"proposedMixedStateTotalAmount\":null,\"proposedExemptions\":[]},\"note\":{\"message\":null,\"customAttributes\":[]},\"localizationExtension\":{\"fields\":[]},\"nonNegotiableTerms\":null,\"scriptFingerprint\":{\"signature\":null,\"signatureUuid\":null,\"lineItemScriptChanges\":[],\"paymentScriptChanges\":[],\"shippingScriptChanges\":[]},\"optionalDuties\":{\"buyerRefusesDuties\":false}},\"operationName\":\"Proposal\"}", 
		"LAST");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.5");

	web_custom_request("produce_batch_60", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287538},\"events\":[{\"schema_id\":\"trekkie_checkout_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\",\""
		"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\"},\"metadata\":{\"event_created_at_ms\":1708661287534}},{\"schema_id\":\"trekkie_checkout_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\""
		"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC\\\",\\\"page_title\\\":\\\"Checkout - Contact Information\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\\\",\\\"ignore_referrer\\\":\\\"true\\\"}\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\""
		"event_created_at_ms\":1708661287536}}]}", 
		"LAST");

	web_custom_request("produce_batch_61", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287537},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\",\"referrer\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"canonical_url\":\"\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\""
		":1708661287536,\"event_source_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\"d42632a1-6A4D-40E0-4C50-17A7E8C2F108\",\"source\":\"trekkie-checkout-one\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 "
		"(Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\",\"deprecated_visit_token\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d426330d-747E-4491-5A57-5F2E63F868D4\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661287537}}]}", 
		"LAST");

	web_custom_request("produce_batch_62", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287534},\"events\":[{\"schema_id\":\"trekkie_checkout_page_view/1.2\",\"payload\":{\"name\":\"Checkout - Contact Information\",\"referrer\":\"https://www.tastynibbles.in/products/tasty-nibbles-tender-coconut-water-200ml-pack-of-6?_pos=4&_sid=6b1a92cec&_ss=r\",\"path\":\"/checkout/contact_information\",\"search\":\"?_ga=undefined\",\"title\":\"Checkout - Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/checkouts/cn/"
		"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"properties\":{},\"eventId\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en-IN\",\"currency\":\"INR\",\"checkoutToken\":\"2815a1816db4a1b101a43a24d632cb56\",\"appName\":\"checkout\",\""
		"uniqToken\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"visitToken\":\"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"microSessionId\":\"d42632a1-6A4D-40E0-4C50-17A7E8C2F108\",\"microSessionCount\":3,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708661287534}}]}", 
		"LAST");

	web_custom_request("produce_batch_63", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287533},\"events\":[{\"schema_id\":\"storefront_customer_tracking_validation/1.0\",\"payload\":{\"event_id\":\"d4263311-9254-4737-B3D4-814217E1FA38\",\"products\":[\"{\\\"variant_id\\\":42201877151919,\\\"product_id\\\":7426164752559,\\\"product_gid\\\":\\\"gid://shopify/Product/7426164752559\\\",\\\"name\\\":\\\"Tender Coconut Water 200ml (Pack of 6)\\\",\\\"price\\\":360,\\\"sku\\\":\\\"CPDFG31939\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\""
		"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":0,\"currency\":\"INR\",\"event_name\":\"checkout_started_once_per_checkout\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708661287533,\"event_source_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"unique_token\":\"5468668d-62ef-4e42-bb35-923c88c414a4\",\"page_id\":\""
		"d42632a1-6A4D-40E0-4C50-17A7E8C2F108\",\"source\":\"trekkie-checkout-one\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"customer_id\":7180330008751,\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\",\"deprecated_visit_token\":\""
		"3a551aaf-aece-4bcb-ab98-7a1ffd6210e9\",\"session_id\":\"sh-d426330d-747E-4491-5A57-5F2E63F868D4\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708661287533}}]}", 
		"LAST");

	web_custom_request("produce_batch_64", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661287734},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"status\":\"loaded\",\"surface\":\"checkout-one\"},\"metadata\":{\"event_created_at_ms\":1708661287228}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708661287228}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/"
		"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\"},\"metadata\":{\"event_created_at_ms\":1708661287246}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"event_name\":\"checkout_started\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\",\"checkout_token\":\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661287247}},{\"schema_id\":\""
		"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\""
		"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\"},\"metadata\":{\"event_created_at_ms\":1708661287519}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\""
		",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"checkout_started\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\",\"checkout_token\":\""
		"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661287519}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":290,\"start_time\":1910,\"session_id\":\"69abff4c-70ee-4be8-8d01-d76c5f9a83af\"},\"metadata\":{\"event_created_at_ms\":1708661287520}}]}", 
		"LAST");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708660979.1.1.1708661288.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_65", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661288846},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":"
		"\"STRICT\",\"pixel_script_version\":\"0574\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\"},\"metadata\":{\"event_created_at_ms\":1708661288336}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/"
		"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0574\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"checkout_started\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\",\"checkout_token\":"
		"\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661288337}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"0574\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1107,\"start_time\":1910,\"session_id\":\"69abff4c-70ee-4be8-8d01-d76c5f9a83af\"},\"metadata\":{\"event_created_at_ms\":1708661288337}}]}", 
		"LAST");

	web_add_cookie("queue_token=ApsH86qhMveoFPxEvmt83_HgARAnMJFUObdJHkh233Ja4zOho9qrfFxhEvYrcJU5apDPVB2mGF5SQCOiK6YCXLeOEubYQEoypvHLhnzEh4S6Lr1GoEDHxAwyuObydUHePSh30KfVAJzX8PJLpmvt3mMqbpUL8NlqHqzq_0UJwP-_HhRFmczZ6dWy; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_66", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708661289801},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0574\",\"pixel_configuration\":null,\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d4-D192-4763-DC4E-CA75C62819E0\"},\"metadata\":{\"event_created_at_ms\":1708661289152}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/"
		"Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0574\",\"pixel_configuration\":null,\"pixel_event_schema_version\":\"v1\",\"event_name\":\"checkout_started\",\"event_type\":\"standard\",\"event_id\":\"sh-d42630d6-6AEA-47D0-632E-CF4C18FF2FA7\",\"checkout_token\""
		":\"2815a1816db4a1b101a43a24d632cb56\"},\"metadata\":{\"event_created_at_ms\":1708661289153}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/checkouts/cn/Z2NwLXVzLWNlbnRyYWwxOjAxSFFBMkJQVDlOUzZDOEcwS0pLWEpZSkRC?_ga=undefined\",\"shop_id\":55925866671,\"surface\":\"checkout-one\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX"
		"\",\"pixel_script_version\":\"0574\",\"pixel_configuration\":null,\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1924,\"start_time\":1910,\"session_id\":\"69abff4c-70ee-4be8-8d01-d76c5f9a83af\"},\"metadata\":{\"event_created_at_ms\":1708661289153}}]}", 
		"LAST");

	return 0;
}
# 5 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\loadrunner\\tastynibbles_solution\\tastynibbles\\\\combined_TastyNibbles.c" 2

