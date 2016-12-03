/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FNFAssetResourceLoadingContentInformationRequest : NSObject {

	BOOL _byteRangeAccessSupported;
	long long _contentLength;
	NSString* _contentType;

}

@property (assign,nonatomic) long long contentLength;                                                      //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                                         //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported;              //@synthesize byteRangeAccessSupported=_byteRangeAccessSupported - In the implementation block
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
-(BOOL)isByteRangeAccessSupported;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(long long)contentLength;
@end
