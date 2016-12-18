/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBVideoAssetEdits;

@interface FBMediaTranscodeParams : FBValueObject <NSCopying, NSCoding> {

	BOOL _useServerSideSettings;
	unsigned long long _quality;
	FBVideoAssetEdits* _edits;

}

@property (nonatomic,readonly) unsigned long long quality;                  //@synthesize quality=_quality - In the implementation block
@property (nonatomic,copy,readonly) FBVideoAssetEdits * edits;              //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) BOOL useServerSideSettings;                  //@synthesize useServerSideSettings=_useServerSideSettings - In the implementation block
-(BOOL)useServerSideSettings;
-(FBVideoAssetEdits *)edits;
-(id)initWithQuality:(unsigned long long)arg1 edits:(id)arg2 useServerSideSettings:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)quality;
@end

