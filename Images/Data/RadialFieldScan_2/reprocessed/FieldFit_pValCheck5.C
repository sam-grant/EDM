void FieldFit_pValCheck5()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:29:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-50,-41.77154,70,56.09605);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[5] = {
   50,
   30,
   10,
   -10,
   -30};
   Double_t Graph0_fy1040[5] = {
   38.94739,
   21.68935,
   7.408325,
   -7.948894,
   -24.61838};
   Double_t Graph0_fex1040[5] = {
   6.953128e-310,
   0,
   0,
   6.953128e-310,
   6.953128e-310};
   Double_t Graph0_fey1040[5] = {
   0.837395,
   0.7835351,
   0.8626627,
   0.831122,
   0.8418898};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","",100,-38,58);
   Graph_Graph01040->SetMinimum(-31.98478);
   Graph_Graph01040->SetMaximum(46.30929);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   
   TF1 *mainFit1041 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1041->SetFillColor(19);
   mainFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1041->SetLineColor(ci);
   mainFit1041->SetLineWidth(2);
   mainFit1041->SetChisquare(3.147141);
   mainFit1041->SetNDF(3);
   mainFit1041->GetXaxis()->SetLabelFont(42);
   mainFit1041->GetXaxis()->SetTitleOffset(1);
   mainFit1041->GetXaxis()->SetTitleFont(42);
   mainFit1041->GetYaxis()->SetLabelFont(42);
   mainFit1041->GetYaxis()->SetTitleFont(42);
   mainFit1041->SetParameter(0,-0.7653893);
   mainFit1041->SetParError(0,0.396502);
   mainFit1041->SetParLimits(0,0,0);
   mainFit1041->SetParameter(1,0.7830247);
   mainFit1041->SetParError(1,0.01316787);
   mainFit1041->SetParLimits(1,0,0);
   mainFit1041->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1041);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.05");
   pt_LaTex = pt->AddText("0.783#pm0.0132");
   pt_LaTex = pt->AddText("#minus0.765#pm0.397");
   pt_LaTex = pt->AddText("#minus0.977#pm0.501");
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
   TLine *line = new TLine(-38,0,0.9774778,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.9774778,-31.98478,0.9774778,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1042 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1042->SetFillColor(19);
   mainFit1042->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1042->SetLineColor(ci);
   mainFit1042->SetLineWidth(2);
   mainFit1042->SetChisquare(3.147141);
   mainFit1042->SetNDF(3);
   mainFit1042->GetXaxis()->SetLabelFont(42);
   mainFit1042->GetXaxis()->SetTitleOffset(1);
   mainFit1042->GetXaxis()->SetTitleFont(42);
   mainFit1042->GetYaxis()->SetLabelFont(42);
   mainFit1042->GetYaxis()->SetTitleFont(42);
   mainFit1042->SetParameter(0,-0.7653893);
   mainFit1042->SetParError(0,0.396502);
   mainFit1042->SetParLimits(0,0,0);
   mainFit1042->SetParameter(1,0.7830247);
   mainFit1042->SetParError(1,0.01316787);
   mainFit1042->SetParLimits(1,0,0);
   mainFit1042->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
