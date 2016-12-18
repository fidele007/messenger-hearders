/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNContactProfileFetcherDelegate;
@class NSString, FBUserSession, FBSimpleNetworkerRequest;

@interface MNContactProfileFetcher : NSObject <FBNetworkerRequestDelegate> {

	id<MNContactProfileFetcherDelegate> _delegate;
	NSString* _contactId;
	FBUserSession* _session;
	FBSimpleNetworkerRequest* _request;

}

@property (nonatomic,retain) FBUserSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * contactId;                                               //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * request;                               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactProfileFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 contactId:(id)arg2 ;
-(void)setDelegate:(id<MNContactProfileFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactProfileFetcherDelegate>)delegate;
-(FBSimpleNetworkerRequest *)request;
-(void)send;
-(void)setRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(NSString *)contactId;
-(void)setContactId:(NSString *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

