/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, FBScenePath;

@interface FBImagePrefetchSpecifier : NSObject {

	BOOL _useImageStreamer;
	BOOL _prefetchOnCellular;
	NSURL* _url;
	NSString* _module;
	unsigned long long _desiredImageFlag;
	FBScenePath* _scenePath;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                           //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) BOOL useImageStreamer;                            //@synthesize useImageStreamer=_useImageStreamer - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                          //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) BOOL prefetchOnCellular;                          //@synthesize prefetchOnCellular=_prefetchOnCellular - In the implementation block
-(NSString *)module;
-(BOOL)useImageStreamer;
-(FBScenePath *)scenePath;
-(unsigned long long)desiredImageFlag;
-(BOOL)prefetchOnCellular;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(BOOL)arg4 desiredImageFlag:(unsigned long long)arg5 prefetchOnCellular:(BOOL)arg6 ;
-(id)initWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 prefetchOnCellular:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
@end

