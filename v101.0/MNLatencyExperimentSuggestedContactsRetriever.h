/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>

@protocol MNSuggestedContactsRetriever, FBServiceTransactionMutating, MNSuggestedContactsRetrieverDelegate;
@class FBUserSession, FBDelayer, NSString;

@interface MNLatencyExperimentSuggestedContactsRetriever : NSObject <MNSuggestedContactsRetrieverDelegate, MNSuggestedContactsRetriever> {

	FBUserSession* _session;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	FBDelayer* _suggestedContactsRetrieverDelegateDelayer;
	id<FBServiceTransactionMutating> _transactionToken;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithSuggestedContactsRetriever:(id)arg1 userSession:(id)arg2 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionDetailItems:(id)arg4 sectionIndexTitles:(id)arg5 preselectedContacts:(id)arg6 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

