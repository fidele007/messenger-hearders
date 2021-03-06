/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSyncPersonRegularTypeProperties : FBValueObject <NSCopying> {

	BOOL _canInstallMessenger;
	BOOL _isMemorialized;
	BOOL _isPartial;
	BOOL _hasMessenger;
	BOOL _isFriend;

}

@property (nonatomic,readonly) BOOL canInstallMessenger;              //@synthesize canInstallMessenger=_canInstallMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isMemorialized;                   //@synthesize isMemorialized=_isMemorialized - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                        //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                     //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isFriend;                         //@synthesize isFriend=_isFriend - In the implementation block
-(BOOL)isMemorialized;
-(BOOL)hasMessenger;
-(id)initWithCanInstallMessenger:(BOOL)arg1 isMemorialized:(BOOL)arg2 isPartial:(BOOL)arg3 hasMessenger:(BOOL)arg4 isFriend:(BOOL)arg5 ;
-(BOOL)canInstallMessenger;
-(BOOL)isPartial;
-(BOOL)isFriend;
@end

