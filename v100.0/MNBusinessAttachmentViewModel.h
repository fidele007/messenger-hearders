/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessStackedContainerViewModel, MNBusinessButtonAction, MNBusinessButtonLoggingData, MNInstantArticleInfo;

@interface MNBusinessAttachmentViewModel : FBValueObject <NSCopying> {

	MNBusinessStackedContainerViewModel* _contents;
	MNBusinessButtonAction* _defaultAction;
	MNBusinessButtonLoggingData* _defaultActionLoggingData;
	MNInstantArticleInfo* _instantArticleInfo;

}

@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * contents;                      //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessButtonAction * defaultAction;                              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessButtonLoggingData * defaultActionLoggingData;              //@synthesize defaultActionLoggingData=_defaultActionLoggingData - In the implementation block
@property (nonatomic,copy,readonly) MNInstantArticleInfo * instantArticleInfo;                           //@synthesize instantArticleInfo=_instantArticleInfo - In the implementation block
-(id)initWithContents:(id)arg1 defaultAction:(id)arg2 defaultActionLoggingData:(id)arg3 instantArticleInfo:(id)arg4 ;
-(MNBusinessButtonLoggingData *)defaultActionLoggingData;
-(MNInstantArticleInfo *)instantArticleInfo;
-(MNBusinessStackedContainerViewModel *)contents;
-(MNBusinessButtonAction *)defaultAction;
@end
