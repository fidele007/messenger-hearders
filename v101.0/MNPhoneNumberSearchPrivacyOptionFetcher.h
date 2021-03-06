/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPhoneNumberSearchPrivacyOptionFetcherDelegate;
@class FBUserSession, FBSimpleNetworkerRequest, NSString;

@interface MNPhoneNumberSearchPrivacyOptionFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _pendingRequest;
	id<MNPhoneNumberSearchPrivacyOptionFetcherDelegate> _delegate;
	double _fetchTimeout;

}

@property (assign,nonatomic,__weak) id<MNPhoneNumberSearchPrivacyOptionFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fetchTimeout;                                                              //@synthesize fetchTimeout=_fetchTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)setFetchTimeout:(double)arg1 ;
-(double)fetchTimeout;
-(void)cancel;
-(void)setDelegate:(id<MNPhoneNumberSearchPrivacyOptionFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPhoneNumberSearchPrivacyOptionFetcherDelegate>)delegate;
-(void)start;
-(id)initWithSession:(id)arg1 ;
@end

