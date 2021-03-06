/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer> {
    BOOL mDisableDestroyAssertion;
    TSCH3DGLFramebufferMultisample *mMultisample;
}

@property (nonatomic) BOOL disableDestroyAssertion;
@property (nonatomic, readonly) struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; } resolveAttributes;

+ (id)multisampleFramebufferWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg1;
+ (struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; })resolveAttributesFromFramebufferAttribute:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg1;

- (BOOL)activateInsideSession:(id)arg1;
- (BOOL)activateResolveFramebufferInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (BOOL)bindInSession:(id)arg1;
- (void)dealloc;
- (void)destroyResourcesInSession:(id)arg1;
- (BOOL)disableDestroyAssertion;
- (void)disableSamplingInSession:(id)arg1;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg1;
- (BOOL)p_usingMultisample;
- (struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; })resolveAttributes;
- (struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; })resolveFramebufferAttributes;
- (id)resolveFramebufferContext;
- (id)resolveFramebufferHandleForSession:(id)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })resolveFramebufferSize;
- (BOOL)resolveFramebufferValidForSession:(id)arg1;
- (id)resolvingFramebuffer;
- (void)setDisableDestroyAssertion:(BOOL)arg1;
- (BOOL)validForSession:(id)arg1;

@end
