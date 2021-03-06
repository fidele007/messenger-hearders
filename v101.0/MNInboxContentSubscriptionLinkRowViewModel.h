/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxContentSubscriptionLinkViewModel, NSString, MNInboxImpressionLoggingData, MNBusinessButtonAction;

@interface MNInboxContentSubscriptionLinkRowViewModel : FBValueObject <NSCopying> {

	BOOL _isInstantArticle;
	BOOL _hasImage;
	MNInboxContentSubscriptionLinkViewModel* _contentSubscriptionLinkViewModel;
	NSString* _title;
	NSString* _source;
	NSString* _createdTime;
	MNInboxImpressionLoggingData* _inboxLoggingData;
	MNBusinessButtonAction* _buttonAction;

}

@property (nonatomic,copy,readonly) MNInboxContentSubscriptionLinkViewModel * contentSubscriptionLinkViewModel;              //@synthesize contentSubscriptionLinkViewModel=_contentSubscriptionLinkViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * createdTime;                                                                  //@synthesize createdTime=_createdTime - In the implementation block
@property (nonatomic,readonly) BOOL isInstantArticle;                                                                        //@synthesize isInstantArticle=_isInstantArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasImage;                                                                                //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * inboxLoggingData;                                         //@synthesize inboxLoggingData=_inboxLoggingData - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessButtonAction * buttonAction;                                                   //@synthesize buttonAction=_buttonAction - In the implementation block
-(MNInboxImpressionLoggingData *)inboxLoggingData;
-(MNInboxContentSubscriptionLinkViewModel *)contentSubscriptionLinkViewModel;
-(id)initWithContentSubscriptionLinkViewModel:(id)arg1 title:(id)arg2 source:(id)arg3 createdTime:(id)arg4 isInstantArticle:(BOOL)arg5 hasImage:(BOOL)arg6 inboxLoggingData:(id)arg7 buttonAction:(id)arg8 ;
-(NSString *)createdTime;
-(BOOL)isInstantArticle;
-(NSString *)source;
-(NSString *)title;
-(BOOL)hasImage;
-(MNBusinessButtonAction *)buttonAction;
@end

