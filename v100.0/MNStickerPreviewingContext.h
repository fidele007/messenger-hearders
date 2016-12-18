/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNStickerPreviewingData, NSArray;

@interface MNStickerPreviewingContext : FBValueObject <NSCopying> {

	MNStickerPreviewingData* _previewingData;
	unsigned long long _defaultActionItemsFlag;
	NSArray* _customActionItems;
	CGRect _sourceRect;

}

@property (nonatomic,copy,readonly) MNStickerPreviewingData * previewingData;              //@synthesize previewingData=_previewingData - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultActionItemsFlag;                  //@synthesize defaultActionItemsFlag=_defaultActionItemsFlag - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customActionItems;                           //@synthesize customActionItems=_customActionItems - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                                          //@synthesize sourceRect=_sourceRect - In the implementation block
-(MNStickerPreviewingData *)previewingData;
-(unsigned long long)defaultActionItemsFlag;
-(NSArray *)customActionItems;
-(id)initWithPreviewingData:(id)arg1 defaultActionItemsFlag:(unsigned long long)arg2 customActionItems:(id)arg3 sourceRect:(CGRect)arg4 ;
-(CGRect)sourceRect;
@end

