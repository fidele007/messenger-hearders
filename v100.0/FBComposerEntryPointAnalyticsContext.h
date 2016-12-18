/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerEntryPointAnalyticsContext : FBValueObject <NSCopying> {

	NSString* _sourceSurface;
	NSString* _entryPointName;

}

@property (nonatomic,copy,readonly) NSString * sourceSurface;               //@synthesize sourceSurface=_sourceSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPointName;              //@synthesize entryPointName=_entryPointName - In the implementation block
-(id)initWithSourceSurface:(id)arg1 entryPointName:(id)arg2 ;
-(NSString *)sourceSurface;
-(NSString *)entryPointName;
@end

