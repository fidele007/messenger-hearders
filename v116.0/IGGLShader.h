/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGContext;

@interface IGGLShader : NSObject {

	unsigned _shaderId;
	IGContext* _context;

}

@property (assign,nonatomic,__weak) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned shaderId;                     //@synthesize shaderId=_shaderId - In the implementation block
-(id)initVertexShaderWithSource:(id)arg1 ;
-(id)initFragmentShaderWithSource:(id)arg1 ;
-(id)initShaderWithSource:(id)arg1 type:(long long)arg2 ;
-(unsigned)shaderId;
-(void)dealloc;
-(IGContext *)context;
-(void)setContext:(IGContext *)arg1 ;
@end

