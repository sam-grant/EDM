void FieldFit_pValCheck4()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 22 10:39:04 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-69.60388,75,68.48763);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[5] = {
   50,
   30,
   10,
   -10,
   -50};
   Double_t Graph0_fy1033[5] = {
   43.80513,
   22.80613,
   8.063181,
   -8.276031,
   -43.65485};
   Double_t Graph0_fex1033[5] = {
   0,
   0,
   0,
   6.95313e-310,
   2.124776e-314};
   Double_t Graph0_fey1033[5] = {
   1.667254,
   1.372288,
   1.586425,
   1.398866,
   2.933776};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","",100,-60,60);
   Graph_Graph01033->SetMinimum(-55.79472);
   Graph_Graph01033->SetMaximum(54.67848);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
   
   TF1 *mainFit1034 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1034->SetFillColor(19);
   mainFit1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1034->SetLineColor(ci);
   mainFit1034->SetLineWidth(2);
   mainFit1034->SetChisquare(4.026827);
   mainFit1034->SetNDF(3);
   mainFit1034->GetXaxis()->SetLabelFont(42);
   mainFit1034->GetXaxis()->SetTitleOffset(1);
   mainFit1034->GetXaxis()->SetTitleFont(42);
   mainFit1034->GetYaxis()->SetLabelFont(42);
   mainFit1034->GetYaxis()->SetTitleFont(42);
   mainFit1034->SetParameter(0,-0.6092257);
   mainFit1034->SetParError(0,0.8160486);
   mainFit1034->SetParLimits(0,0,0);
   mainFit1034->SetParameter(1,0.850467);
   mainFit1034->SetParError(1,0.02693119);
   mainFit1034->SetParLimits(1,0,0);
   mainFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1034);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.34");
   pt_LaTex = pt->AddText(" 0.85#pm0.0269");
   pt_LaTex = pt->AddText("#minus0.609#pm0.816");
   pt_LaTex = pt->AddText("#minus0.716#pm0.949");
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
   TLine *line = new TLine(-60,0,0.7163425,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7163425,-55.79472,0.7163425,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1035 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1035->SetFillColor(19);
   mainFit1035->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1035->SetLineColor(ci);
   mainFit1035->SetLineWidth(2);
   mainFit1035->SetChisquare(4.026827);
   mainFit1035->SetNDF(3);
   mainFit1035->GetXaxis()->SetLabelFont(42);
   mainFit1035->GetXaxis()->SetTitleOffset(1);
   mainFit1035->GetXaxis()->SetTitleFont(42);
   mainFit1035->GetYaxis()->SetLabelFont(42);
   mainFit1035->GetYaxis()->SetTitleFont(42);
   mainFit1035->SetParameter(0,-0.6092257);
   mainFit1035->SetParError(0,0.8160486);
   mainFit1035->SetParLimits(0,0,0);
   mainFit1035->SetParameter(1,0.850467);
   mainFit1035->SetParError(1,0.02693119);
   mainFit1035->SetParLimits(1,0,0);
   mainFit1035->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
