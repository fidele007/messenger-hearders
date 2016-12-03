/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBPersonSyncProperties : FBValueObject <NSCopying> {

	BOOL _shouldUseMessengerSharedDiskStore;
	BOOL _shouldOwnSharedDiskStore;

}

@property (nonatomic,readonly) BOOL shouldUseMessengerSharedDiskStore;              //@synthesize shouldUseMessengerSharedDiskStore=_shouldUseMessengerSharedDiskStore - In the implementation block
@property (nonatomic,readonly) BOOL shouldOwnSharedDiskStore;                       //@synthesize shouldOwnSharedDiskStore=_shouldOwnSharedDiskStore - In the implementation block
-(BOOL)shouldUseMessengerSharedDiskStore;
-(BOOL)shouldOwnSharedDiskStore;
-(id)initWithShouldUseMessengerSharedDiskStore:(BOOL)arg1 shouldOwnSharedDiskStore:(BOOL)arg2 ;
@end
