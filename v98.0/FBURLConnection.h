/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol FBURLConnectionDelegate;
@class NSURLConnection, NSMutableData, NSURLResponse, NSString;

@interface FBURLConnection : NSObject <NSURLConnectionDataDelegate> {

	BOOL _skipRoundtripIfCached;
	id<FBURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	/*^block*/id _handler;
	NSURLResponse* _response;
	unsigned long long _requestStartTime;
	unsigned long long _loggerSerialNumber;

}

@property (nonatomic,retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                             //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long long requestStartTime;                  //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long loggerSerialNumber;              //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL skipRoundtripIfCached;                           //@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
@property (assign,nonatomic) id<FBURLConnectionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(unsigned long long)loggerSerialNumber;
-(BOOL)skipRoundtripIfCached;
-(void)setSkipRoundtripIfCached:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getCache;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 cachedData:(id)arg2 forURL:(id)arg3 ;
-(void)invokeHandler:(/*^block*/id)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(BOOL)isCDNURL:(id)arg1 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 response:(id)arg2 responseData:(id)arg3 ;
-(BOOL)shouldShortCircuitRedirectResponse:(id)arg1 ;
-(void)setRequestStartTime:(unsigned long long)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBURLConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<FBURLConnectionDelegate>)delegate;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURLResponse *)response;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(unsigned long long)requestStartTime;
-(void)logMessage:(id)arg1 ;
@end

