/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>
#import <FBSharedFramework/MNSuggestedContactsRetrieverDelegate.h>

@class FBWebRTCRecentCallerContactsRetriever, NSArray, NSString;

@interface FBWebRTCSynchronousContactsRetriever : NSObject <FBClassProvidable, MNSuggestedContactsRetrieverDelegate> {

	FBWebRTCRecentCallerContactsRetriever* _recentCallerRetriever;
	NSArray* _recentContacts;

}

@property (nonatomic,copy,readonly) NSArray * recentContacts;              //@synthesize recentContacts=_recentContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRecentContactsRetriever:(id)arg1 ;
-(void)refreshRecentContacts;
-(NSArray *)recentContacts;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionDetailItems:(id)arg4 sectionIndexTitles:(id)arg5 preselectedContacts:(id)arg6 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(void)dealloc;
@end

