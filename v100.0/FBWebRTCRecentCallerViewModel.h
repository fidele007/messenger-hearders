/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNSuggestedContactsRetriever;
@class FBWebRTCContactReadThroughCache, FBWebRTCRecentCallerViewModelListenerAnnouncer, NSArray, NSString;

@interface FBWebRTCRecentCallerViewModel : NSObject <MNSuggestedContactsRetrieverDelegate, FBViewerContextClassProvidable> {

	FBWebRTCContactReadThroughCache* _contactCache;
	id<MNSuggestedContactsRetriever> _contactSuggestions;
	FBWebRTCRecentCallerViewModelListenerAnnouncer* _announcer;
	BOOL _retrievalStarted;
	BOOL _didFinishFetching;
	NSArray* _recentCallers;

}

@property (nonatomic,copy,readonly) NSArray * recentCallers;              //@synthesize recentCallers=_recentCallers - In the implementation block
@property (nonatomic,readonly) BOOL didFinishFetching;                    //@synthesize didFinishFetching=_didFinishFetching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)startLoadingDataIfNeeded;
-(NSArray *)recentCallers;
-(id)getContactForFBID:(id)arg1 ;
-(id)initWithContactSuggestions:(id)arg1 contactStore:(id)arg2 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)didFinishFetching;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

