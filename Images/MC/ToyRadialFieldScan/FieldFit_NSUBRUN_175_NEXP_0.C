void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-47.4464,45,68.18235);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[2] = {
   -30,
   30};
   Double_t Graph0_fy1053[2] = {
   -27.17853,
   47.91448};
   Double_t Graph0_fex1053[2] = {
   0,
   0};
   Double_t Graph0_fey1053[2] = {
   0.9964147,
   0.9964147};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","175 sub-runs",100,-36,36);
   Graph_Graph01053->SetMinimum(-35.88352);
   Graph_Graph01053->SetMaximum(56.61947);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
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
   
   
   TF1 *mainFit1054 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1054->SetFillColor(19);
   mainFit1054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1054->SetLineColor(ci);
   mainFit1054->SetLineWidth(2);
   mainFit1054->SetChisquare(1.969385e-12);
   mainFit1054->SetNDF(0);
   mainFit1054->GetXaxis()->SetLabelFont(42);
   mainFit1054->GetXaxis()->SetTitleOffset(1);
   mainFit1054->GetXaxis()->SetTitleFont(42);
   mainFit1054->GetYaxis()->SetLabelFont(42);
   mainFit1054->GetYaxis()->SetTitleFont(42);
   mainFit1054->SetParameter(0,10.36797);
   mainFit1054->SetParError(0,0.7045716);
   mainFit1054->SetParLimits(0,0,0);
   mainFit1054->SetParameter(1,1.25155);
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
   pt_LaTex = pt->AddText(" 1.25#pm0.0235");
   pt_LaTex = pt->AddText(" 10.4#pm0.705");
   pt_LaTex = pt->AddText(" 8.28#pm0.584");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.284107,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.284107,-35.88352,-8.284107,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1055 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1055->SetFillColor(19);
   mainFit1055->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1055->SetLineColor(ci);
   mainFit1055->SetLineWidth(2);
   mainFit1055->SetChisquare(1.969385e-12);
   mainFit1055->SetNDF(0);
   mainFit1055->GetXaxis()->SetLabelFont(42);
   mainFit1055->GetXaxis()->SetTitleOffset(1);
   mainFit1055->GetXaxis()->SetTitleFont(42);
   mainFit1055->GetYaxis()->SetLabelFont(42);
   mainFit1055->GetYaxis()->SetTitleFont(42);
   mainFit1055->SetParameter(0,10.36797);
   mainFit1055->SetParError(0,0.7045716);
   mainFit1055->SetParLimits(0,0,0);
   mainFit1055->SetParameter(1,1.25155);
   mainFit1055->SetParError(1,0.02348572);
   mainFit1055->SetParLimits(1,0,0);
   mainFit1055->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
