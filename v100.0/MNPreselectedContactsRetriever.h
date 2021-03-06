/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSuggestedContactsRetrieverDelegate;
@class MNUserStore, NSSet, NSArray, NSString;

@interface MNPreselectedContactsRetriever : NSObject <MNSuggestedContactsRetriever, FBClassProvidable> {

	MNUserStore* _userStore;
	NSSet* _idsToFetch;
	unsigned long long _requestId;
	NSArray* _latestPreselectedContacts;
	id<MNSuggestedContactsRetrieverDelegate> delegate;
	NSString* _defaultSectionTitle;

}

@property (nonatomic,copy) NSString * defaultSectionTitle;                                          //@synthesize defaultSectionTitle=_defaultSectionTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setIDsToFetch:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)setDefaultSectionTitle:(NSString *)arg1 ;
-(id)initWithUserStore:(id)arg1 ;
-(void)_updateDelegateWithPreselectedContactsIfNecessary:(id)arg1 ;
-(NSString *)defaultSectionTitle;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

