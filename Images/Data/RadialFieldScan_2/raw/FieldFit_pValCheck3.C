void FieldFit_pValCheck3()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 01:22:32 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-61.36538,75,60.9951);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[5] = {
   50,
   30,
   10,
   -30,
   -50};
   Double_t Graph0_fy1037[5] = {
   39.1181,
   20.96023,
   9.013131,
   -23.37896,
   -38.35743};
   Double_t Graph0_fex1037[5] = {
   6.953119e-310,
   0,
   0,
   6.953119e-310,
   2.233916e-314};
   Double_t Graph0_fey1037[5] = {
   1.483591,
   1.222034,
   1.413793,
   1.252617,
   2.614538};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,-60,60);
   Graph_Graph01037->SetMinimum(-49.12933);
   Graph_Graph01037->SetMaximum(48.75906);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   
   TF1 *mainFit1038 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1038->SetFillColor(19);
   mainFit1038->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1038->SetLineColor(ci);
   mainFit1038->SetLineWidth(2);
   mainFit1038->SetChisquare(3.91866);
   mainFit1038->SetNDF(3);
   mainFit1038->GetXaxis()->SetLabelFont(42);
   mainFit1038->GetXaxis()->SetTitleOffset(1);
   mainFit1038->GetXaxis()->SetTitleFont(42);
   mainFit1038->GetYaxis()->SetLabelFont(42);
   mainFit1038->GetYaxis()->SetTitleFont(42);
   mainFit1038->SetParameter(0,-0.2277759);
   mainFit1038->SetParError(0,0.6680941);
   mainFit1038->SetParLimits(0,0,0);
   mainFit1038->SetParameter(1,0.7651554);
   mainFit1038->SetParError(1,0.0198493);
   mainFit1038->SetParLimits(1,0,0);
   mainFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1038);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.31");
   pt_LaTex = pt->AddText("0.765#pm0.0198");
   pt_LaTex = pt->AddText("#minus0.228#pm0.668");
   pt_LaTex = pt->AddText("#minus0.298#pm0.871");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,0.2976858,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.2976858,-49.12933,0.2976858,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1039 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1039->SetFillColor(19);
   mainFit1039->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1039->SetLineColor(ci);
   mainFit1039->SetLineWidth(2);
   mainFit1039->SetChisquare(3.91866);
   mainFit1039->SetNDF(3);
   mainFit1039->GetXaxis()->SetLabelFont(42);
   mainFit1039->GetXaxis()->SetTitleOffset(1);
   mainFit1039->GetXaxis()->SetTitleFont(42);
   mainFit1039->GetYaxis()->SetLabelFont(42);
   mainFit1039->GetYaxis()->SetTitleFont(42);
   mainFit1039->SetParameter(0,-0.2277759);
   mainFit1039->SetParError(0,0.6680941);
   mainFit1039->SetParLimits(0,0,0);
   mainFit1039->SetParameter(1,0.7651554);
   mainFit1039->SetParError(1,0.0198493);
   mainFit1039->SetParLimits(1,0,0);
   mainFit1039->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
