/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(FBVideoAssetEdits *)edits;
-(BOOL)useServerSideSettings;
-(id)initWithQuality:(unsigned long long)arg1 edits:(id)arg2 useServerSideSettings:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)quality;
@end

