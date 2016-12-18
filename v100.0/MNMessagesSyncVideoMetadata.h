/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagesSyncVideoMetadata : NSObject <TBase, NSCoding> {

	int __width;
	int __height;
	int __durationMs;
	NSString* __thumbnailUri;
	NSString* __videoUri;
	int __source;
	int __rotation;
	BOOL __width_isset;
	BOOL __height_isset;
	BOOL __durationMs_isset;
	BOOL __thumbnailUri_isset;
	BOOL __videoUri_isset;
	BOOL __source_isset;
	BOOL __rotation_isset;

}

@property (assign,setter=setWidth:,getter=width,nonatomic) int width; 
@property (assign,setter=setHeight:,getter=height,nonatomic) int height; 
@property (assign,setter=setDurationMs:,getter=durationMs,nonatomic) int durationMs; 
@property (setter=setThumbnailUri:,getter=thumbnailUri,nonatomic,retain) NSString * thumbnailUri; 
@property (setter=setVideoUri:,getter=videoUri,nonatomic,retain) NSString * videoUri; 
@property (assign,setter=setSource:,getter=source,nonatomic) int source; 
@property (assign,setter=setRotation:,getter=rotation,nonatomic) int rotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)sourceIsSet;
-(void)unsetSource;
-(NSString *)thumbnailUri;
-(BOOL)widthIsSet;
-(void)unsetWidth;
-(BOOL)heightIsSet;
-(void)unsetHeight;
-(BOOL)rotationIsSet;
-(void)unsetRotation;
-(NSString *)videoUri;
-(void)setVideoUri:(NSString *)arg1 ;
-(void)setThumbnailUri:(NSString *)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 durationMs:(int)arg3 thumbnailUri:(id)arg4 videoUri:(id)arg5 source:(int)arg6 rotation:(int)arg7 ;
-(BOOL)durationMsIsSet;
-(void)unsetDurationMs;
-(BOOL)thumbnailUriIsSet;
-(void)unsetThumbnailUri;
-(BOOL)videoUriIsSet;
-(void)unsetVideoUri;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setSource:(int)arg1 ;
-(int)source;
-(int)width;
-(int)height;
-(void)setRotation:(int)arg1 ;
-(int)rotation;
-(void)setWidth:(int)arg1 ;
-(void)validate;
-(void)setHeight:(int)arg1 ;
-(void)setDurationMs:(int)arg1 ;
-(int)durationMs;
-(void)write:(id)arg1 ;
@end

