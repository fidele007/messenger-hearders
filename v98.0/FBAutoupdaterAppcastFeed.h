/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <Messenger/FBAutoupdaterFeed.h>

@protocol FBAutoupdaterFeedDelegate;
@class NSMutableData, FBAutoupdaterAppcastParser, NSURLConnection, NSURL, FBAutoupdaterHost, NSString;

@interface FBAutoupdaterAppcastFeed : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, FBAutoupdaterFeed> {

	NSMutableData* _partialFeedData;
	FBAutoupdaterAppcastParser* _parser;
	NSURLConnection* _connection;
	id<FBAutoupdaterFeedDelegate> _delegate;
	NSURL* _fetchURL;
	FBAutoupdaterHost* _host;

}

@property (assign,nonatomic,__weak) id<FBAutoupdaterFeedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * fetchURL;                                           //@synthesize fetchURL=_fetchURL - In the implementation block
@property (nonatomic,retain) FBAutoupdaterHost * host;                                   //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchUpdates;
-(NSURL *)fetchURL;
-(void)setFetchURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 host:(id)arg3 ;
-(id)_getFetchURLFromHost:(id)arg1 ;
-(void)_failWithMessage:(id)arg1 underlyingError:(id)arg2 ;
-(void)fetchUpdatesWithConnection:(id)arg1 ;
-(void)_parseData:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBAutoupdaterFeedDelegate>)arg1 ;
-(id<FBAutoupdaterFeedDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(FBAutoupdaterHost *)host;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setHost:(FBAutoupdaterHost *)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
@end

