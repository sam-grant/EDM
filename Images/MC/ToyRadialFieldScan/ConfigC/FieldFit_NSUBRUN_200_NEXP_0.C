void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:03 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3209857,75,0.2610994);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1125[6] = {
   0.1603987,
   0.07962213,
   0.00959632,
   -0.0701619,
   -0.1368016,
   -0.2202849};
   Double_t Graph0_fex1125[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1125[6] = {
   0.003686525,
   0.003686756,
   0.003686692,
   0.003686607,
   0.003686618,
   0.003686641};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","Sub-runs 200",100,-60,60);
   Graph_Graph01125->SetMinimum(-0.2627772);
   Graph_Graph01125->SetMaximum(0.2028909);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
   
   TF1 *mainFit1126 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1126->SetFillColor(19);
   mainFit1126->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1126->SetLineColor(ci);
   mainFit1126->SetLineWidth(2);
   mainFit1126->SetChisquare(4.904934);
   mainFit1126->SetNDF(4);
   mainFit1126->GetXaxis()->SetLabelFont(42);
   mainFit1126->GetXaxis()->SetTitleOffset(1);
   mainFit1126->GetXaxis()->SetTitleFont(42);
   mainFit1126->GetYaxis()->SetLabelFont(42);
   mainFit1126->GetYaxis()->SetTitleFont(42);
   mainFit1126->SetParameter(0,-0.02960487);
   mainFit1126->SetParError(0,0.001505064);
   mainFit1126->SetParLimits(0,0,0);
   mainFit1126->SetParameter(1,-0.003760639);
   mainFit1126->SetParError(1,4.406344e-05);
   mainFit1126->SetParLimits(1,0,0);
   mainFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1126);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.23");
   pt_LaTex = pt->AddText("#minus0.00376#pm4.41e-05");
   pt_LaTex = pt->AddText("#minus0.0296#pm0.00151");
   pt_LaTex = pt->AddText("#minus7.87#pm0.411");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.872298,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.872298,-0.2627772,-7.872298,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1127 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1127->SetFillColor(19);
   mainFit1127->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1127->SetLineColor(ci);
   mainFit1127->SetLineWidth(2);
   mainFit1127->SetChisquare(4.904934);
   mainFit1127->SetNDF(4);
   mainFit1127->GetXaxis()->SetLabelFont(42);
   mainFit1127->GetXaxis()->SetTitleOffset(1);
   mainFit1127->GetXaxis()->SetTitleFont(42);
   mainFit1127->GetYaxis()->SetLabelFont(42);
   mainFit1127->GetYaxis()->SetTitleFont(42);
   mainFit1127->SetParameter(0,-0.02960487);
   mainFit1127->SetParError(0,0.001505064);
   mainFit1127->SetParLimits(0,0,0);
   mainFit1127->SetParameter(1,-0.003760639);
   mainFit1127->SetParError(1,4.406344e-05);
   mainFit1127->SetParLimits(1,0,0);
   mainFit1127->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 200");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
