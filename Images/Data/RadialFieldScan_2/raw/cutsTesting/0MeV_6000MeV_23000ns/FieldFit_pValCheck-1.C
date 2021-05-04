void FieldFit_pValCheck-1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 15:51:48 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-74.63024,75,70.24381);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1023[6] = {
   45.11276,
   24.60734,
   7.916849,
   -11.34632,
   -29.01827,
   -48.80107};
   Double_t Graph0_fex1023[6] = {
   0,
   0,
   0,
   6.953128e-310,
   6.953128e-310,
   2.145594e-314};
   Double_t Graph0_fey1023[6] = {
   0.9853778,
   0.7880149,
   0.9109952,
   0.8028646,
   0.8062788,
   1.683492};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","",100,-60,60);
   Graph_Graph01023->SetMinimum(-60.14283);
   Graph_Graph01023->SetMaximum(55.7564);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   
   TF1 *mainFit1024 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1024->SetFillColor(19);
   mainFit1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1024->SetLineColor(ci);
   mainFit1024->SetLineWidth(2);
   mainFit1024->SetChisquare(4.171963);
   mainFit1024->SetNDF(4);
   mainFit1024->GetXaxis()->SetLabelFont(42);
   mainFit1024->GetXaxis()->SetTitleOffset(1);
   mainFit1024->GetXaxis()->SetTitleFont(42);
   mainFit1024->GetYaxis()->SetLabelFont(42);
   mainFit1024->GetYaxis()->SetTitleFont(42);
   mainFit1024->SetParameter(0,-1.893478);
   mainFit1024->SetParError(0,0.3745995);
   mainFit1024->SetParLimits(0,0,0);
   mainFit1024->SetParameter(1,0.9206173);
   mainFit1024->SetParError(1,0.01247968);
   mainFit1024->SetParLimits(1,0,0);
   mainFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1024);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.04");
   pt_LaTex = pt->AddText("0.921#pm0.0125");
   pt_LaTex = pt->AddText("#minus1.89#pm0.375");
   pt_LaTex = pt->AddText("#minus2.06#pm0.404");
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
   TLine *line = new TLine(-60,0,2.056748,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.056748,-60.14283,2.056748,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1025 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1025->SetFillColor(19);
   mainFit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1025->SetLineColor(ci);
   mainFit1025->SetLineWidth(2);
   mainFit1025->SetChisquare(4.171963);
   mainFit1025->SetNDF(4);
   mainFit1025->GetXaxis()->SetLabelFont(42);
   mainFit1025->GetXaxis()->SetTitleOffset(1);
   mainFit1025->GetXaxis()->SetTitleFont(42);
   mainFit1025->GetYaxis()->SetLabelFont(42);
   mainFit1025->GetYaxis()->SetTitleFont(42);
   mainFit1025->SetParameter(0,-1.893478);
   mainFit1025->SetParError(0,0.3745995);
   mainFit1025->SetParLimits(0,0,0);
   mainFit1025->SetParameter(1,0.9206173);
   mainFit1025->SetParError(1,0.01247968);
   mainFit1025->SetParLimits(1,0,0);
   mainFit1025->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
