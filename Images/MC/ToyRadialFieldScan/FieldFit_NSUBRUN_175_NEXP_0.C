void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:06:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-43.2649,45,64.00085);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[2] = {
   30,
   -30};
   Double_t Graph0_fy1053[2] = {
   45.12681,
   -24.39086};
   Double_t Graph0_fex1053[2] = {
   0,
   0};
   Double_t Graph0_fey1053[2] = {
   0.9964147,
   0.9964147};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","",100,-36,36);
   Graph_Graph01053->SetMinimum(-32.53832);
   Graph_Graph01053->SetMaximum(53.27427);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   
   TF1 *mainFit1054 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1054->SetFillColor(19);
   mainFit1054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1054->SetLineColor(ci);
   mainFit1054->SetLineWidth(2);
   mainFit1054->SetChisquare(9.618744e-14);
   mainFit1054->SetNDF(0);
   mainFit1054->GetXaxis()->SetLabelFont(42);
   mainFit1054->GetXaxis()->SetTitleOffset(1);
   mainFit1054->GetXaxis()->SetTitleFont(42);
   mainFit1054->GetYaxis()->SetLabelFont(42);
   mainFit1054->GetYaxis()->SetTitleFont(42);
   mainFit1054->SetParameter(0,10.36798);
   mainFit1054->SetParError(0,0.7045716);
   mainFit1054->SetParLimits(0,0,0);
   mainFit1054->SetParameter(1,1.158628);
   mainFit1054->SetParError(1,0.02348572);
   mainFit1054->SetParLimits(1,0,0);
   mainFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1054);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1.2
#pm0.02
");
   pt_LaTex = pt->AddText("1e+01
#pm0.7
");
   pt_LaTex = pt->AddText("9
#pm0.6
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.948496,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.948496,-32.53832,-8.948496,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1055 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1055->SetFillColor(19);
   mainFit1055->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1055->SetLineColor(ci);
   mainFit1055->SetLineWidth(2);
   mainFit1055->SetChisquare(9.618744e-14);
   mainFit1055->SetNDF(0);
   mainFit1055->GetXaxis()->SetLabelFont(42);
   mainFit1055->GetXaxis()->SetTitleOffset(1);
   mainFit1055->GetXaxis()->SetTitleFont(42);
   mainFit1055->GetYaxis()->SetLabelFont(42);
   mainFit1055->GetYaxis()->SetTitleFont(42);
   mainFit1055->SetParameter(0,10.36798);
   mainFit1055->SetParError(0,0.7045716);
   mainFit1055->SetParLimits(0,0,0);
   mainFit1055->SetParameter(1,1.158628);
   mainFit1055->SetParError(1,0.02348572);
   mainFit1055->SetParLimits(1,0,0);
   mainFit1055->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
