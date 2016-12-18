/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSuggestedContactsRetriever;
@class NSString, UIView;

@interface MNSuggestedContactsRetrieverConfiguration : NSObject {

	NSString* _title;
	id<MNSuggestedContactsRetriever> _contactsRetriever;
	UIView* _nullStateView;
	/*^block*/id _nullStateShouldShowBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id<MNSuggestedContactsRetriever> contactsRetriever;              //@synthesize contactsRetriever=_contactsRetriever - In the implementation block
@property (nonatomic,readonly) UIView * nullStateView;                                          //@synthesize nullStateView=_nullStateView - In the implementation block
@property (nonatomic,readonly) id nullStateShouldShowBlock;                                     //@synthesize nullStateShouldShowBlock=_nullStateShouldShowBlock - In the implementation block
-(UIView *)nullStateView;
-(id)initWithTitle:(id)arg1 contactsRetriever:(id)arg2 nullStateView:(id)arg3 nullStateShouldShowBlock:(/*^block*/id)arg4 ;
-(id<MNSuggestedContactsRetriever>)contactsRetriever;
-(id)nullStateShouldShowBlock;
-(NSString *)title;
@end

