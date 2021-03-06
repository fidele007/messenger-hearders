/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMStickerPackDescriptor : NSObject {

	unsigned long long _stickerPackId;
	unsigned long long _stickerId;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long stickerPackId;              //@synthesize stickerPackId=_stickerPackId - In the implementation block
@property (nonatomic,readonly) unsigned long long stickerId;                  //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
-(id)initWithStickerId:(unsigned long long)arg1 ;
-(id)initWithStickerPackId:(unsigned long long)arg1 ;
-(unsigned long long)stickerPackId;
-(unsigned long long)stickerId;
-(id)description;
-(unsigned long long)type;
-(BOOL)isValidDescriptor;
@end

