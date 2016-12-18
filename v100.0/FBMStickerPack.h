/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMStickerPack : NSObject {

	unsigned long long _fbId;
	NSString* _name;
	BOOL _isGhostPack;
	BOOL _isMontageCapable;

}

@property (nonatomic,readonly) unsigned long long fbId;              //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isGhostPack;                       //@synthesize isGhostPack=_isGhostPack - In the implementation block
@property (nonatomic,readonly) BOOL isMontageCapable;                //@synthesize isMontageCapable=_isMontageCapable - In the implementation block
+(id)stickerPackFromDictionary:(id)arg1 ;
-(unsigned long long)fbId;
-(BOOL)isMontageCapable;
-(id)initWithFbId:(unsigned long long)arg1 name:(id)arg2 ;
-(BOOL)isGhostPack;
-(id)initWithFbId:(unsigned long long)arg1 name:(id)arg2 isMontageCapable:(BOOL)arg3 ;
-(id)generateDictionaryObject;
-(void)setIsGhostPack:(BOOL)arg1 ;
-(id)initWithFbId:(unsigned long long)arg1 name:(id)arg2 isGhostPack:(BOOL)arg3 isMontageCapable:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
@end

