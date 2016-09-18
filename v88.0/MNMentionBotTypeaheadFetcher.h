/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBServiceTransactionMutating, MNMentionBotTypeaheadFetcherDelegate;
@class FBUserSession, NSString;

@interface MNMentionBotTypeaheadFetcher : NSObject <FBCancelable, FBClassProvidable> {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _transactionToken;
	id<MNMentionBotTypeaheadFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMentionBotTypeaheadFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handleResponseContent:(id)arg1 cachedContent:(BOOL)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)startFetchingMentionBotTypeaheadDataWithQueryText:(id)arg1 threadKey:(id)arg2 ;
-(void)_fetchContentForQuery:(id)arg1 responseTTLInSeconds:(unsigned long long)arg2 fetchBlock:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<MNMentionBotTypeaheadFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMentionBotTypeaheadFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

