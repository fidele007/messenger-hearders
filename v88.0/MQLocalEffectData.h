/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEffectData.h>

@class NSString;

@interface MQLocalEffectData : MQEffectData {

	NSString* _effectClassName;
	NSString* _imageName;
	NSString* _imageUrl;

}

@property (nonatomic,copy,readonly) NSString * effectClassName;              //@synthesize effectClassName=_effectClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageUrl;                     //@synthesize imageUrl=_imageUrl - In the implementation block
-(NSString *)imageUrl;
-(NSString *)effectClassName;
-(id)initWithDictionary:(id)arg1 ;
-(id)toDictionary;
-(NSString *)imageName;
@end

