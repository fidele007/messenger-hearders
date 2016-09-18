/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>

@protocol MNSuggestedContactsRetriever, MNSuggestedContactsRetrieverDelegate;
@class NSString;

@interface MNSuggestedContactsRetrieverWithHoistedMontageContact : NSObject <MNSuggestedContactsRetriever, MNSuggestedContactsRetrieverDelegate> {

	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	BOOL _shouldPreselectMontage;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldPreselectMontage;                                           //@synthesize shouldPreselectMontage=_shouldPreselectMontage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionIndexTitles:(id)arg4 preselectedContacts:(id)arg5 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithSuggestedContactsRetriever:(id)arg1 ;
-(void)setShouldPreselectMontage:(BOOL)arg1 ;
-(BOOL)shouldPreselectMontage;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end
