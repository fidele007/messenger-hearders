/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNLinkPreviewingData, NSArray;

@interface MNLinkPreviewingContext : FBValueObject <NSCopying> {

	MNLinkPreviewingData* _previewingData;
	unsigned long long _defaultActionItemsFlag;
	NSArray* _customActionItems;
	CGRect _sourceRect;

}

@property (nonatomic,copy,readonly) MNLinkPreviewingData * previewingData;              //@synthesize previewingData=_previewingData - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultActionItemsFlag;               //@synthesize defaultActionItemsFlag=_defaultActionItemsFlag - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customActionItems;                        //@synthesize customActionItems=_customActionItems - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                                       //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)initWithPreviewingData:(id)arg1 defaultActionItemsFlag:(unsigned long long)arg2 customActionItems:(id)arg3 sourceRect:(CGRect)arg4 ;
-(MNLinkPreviewingData *)previewingData;
-(unsigned long long)defaultActionItemsFlag;
-(NSArray *)customActionItems;
-(CGRect)sourceRect;
@end

