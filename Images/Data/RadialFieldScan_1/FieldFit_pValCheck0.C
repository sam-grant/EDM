void FieldFit_pValCheck0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:20:51 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-58.10359,45,58.10359);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[5] = {
   -30,
   6.953119e-310,
   6.953119e-310,
   6.953119e-310,
   6.953119e-310};
   Double_t Graph0_fy1014[5] = {
   -13.08869,
   0,
   6.946935e-310,
   6.953119e-310,
   6.953119e-310};
   Double_t Graph0_fex1014[5] = {
   0,
   30,
   6.953119e-310,
   2.239849e-314,
   6.946935e-310};
   Double_t Graph0_fey1014[5] = {
   1.560014,
   38.73573,
   6.953119e-310,
   2.240143e-314,
   6.946935e-310};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,-36,36);
   Graph_Graph01014->SetMinimum(-46.48287);
   Graph_Graph01014->SetMaximum(46.48287);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   
   TF1 *mainFit1015 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1015->SetFillColor(19);
   mainFit1015->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1015->SetLineColor(ci);
   mainFit1015->SetLineWidth(2);
   mainFit1015->SetChisquare(1.630587e-10);
   mainFit1015->SetNDF(3);
   mainFit1015->GetXaxis()->SetLabelFont(42);
   mainFit1015->GetXaxis()->SetTitleOffset(1);
   mainFit1015->GetXaxis()->SetTitleFont(42);
   mainFit1015->GetYaxis()->SetLabelFont(42);
   mainFit1015->GetYaxis()->SetTitleFont(42);
   mainFit1015->SetParameter(0,-0.0004540327);
   mainFit1015->SetParError(0,40.8869);
   mainFit1015->SetParLimits(0,0,0);
   mainFit1015->SetParameter(1,0.4362743);
   mainFit1015->SetParError(1,1.363888);
   mainFit1015->SetParLimits(1,0,0);
   mainFit1015->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1015);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("5.44e-11");
   pt_LaTex = pt->AddText("0.436#pm 1.36");
   pt_LaTex = pt->AddText("#minus0.000454#pm 40.9");
   pt_LaTex = pt->AddText("0.00104#pm 93.7");
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
   TLine *line = new TLine(-36,0,0.001040705,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.001040705,-46.48287,0.001040705,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1016 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1016->SetFillColor(19);
   mainFit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1016->SetLineColor(ci);
   mainFit1016->SetLineWidth(2);
   mainFit1016->SetChisquare(1.630587e-10);
   mainFit1016->SetNDF(3);
   mainFit1016->GetXaxis()->SetLabelFont(42);
   mainFit1016->GetXaxis()->SetTitleOffset(1);
   mainFit1016->GetXaxis()->SetTitleFont(42);
   mainFit1016->GetYaxis()->SetLabelFont(42);
   mainFit1016->GetYaxis()->SetTitleFont(42);
   mainFit1016->SetParameter(0,-0.0004540327);
   mainFit1016->SetParError(0,40.8869);
   mainFit1016->SetParLimits(0,0,0);
   mainFit1016->SetParameter(1,0.4362743);
   mainFit1016->SetParError(1,1.363888);
   mainFit1016->SetParLimits(1,0,0);
   mainFit1016->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
