void FieldFit_pValCheck4()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:24:00 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-58.81911,75,59.50556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[5] = {
   50,
   30,
   10,
   -10,
   -50};
   Double_t Graph0_fy1038[5] = {
   38.94739,
   21.68935,
   7.408325,
   -7.948894,
   -37.59553};
   Double_t Graph0_fex1038[5] = {
   6.95312e-310,
   0,
   0,
   6.95312e-310,
   2.227519e-314};
   Double_t Graph0_fey1038[5] = {
   0.837395,
   0.7835351,
   0.8626627,
   0.831122,
   1.502794};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","",100,-60,60);
   Graph_Graph01038->SetMinimum(-46.98664);
   Graph_Graph01038->SetMaximum(47.6731);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   
   TF1 *mainFit1039 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1039->SetFillColor(19);
   mainFit1039->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1039->SetLineColor(ci);
   mainFit1039->SetLineWidth(2);
   mainFit1039->SetChisquare(3.308545);
   mainFit1039->SetNDF(3);
   mainFit1039->GetXaxis()->SetLabelFont(42);
   mainFit1039->GetXaxis()->SetTitleOffset(1);
   mainFit1039->GetXaxis()->SetTitleFont(42);
   mainFit1039->GetYaxis()->SetLabelFont(42);
   mainFit1039->GetYaxis()->SetTitleFont(42);
   mainFit1039->SetParameter(0,-0.2372634);
   mainFit1039->SetParError(0,0.4553348);
   mainFit1039->SetParLimits(0,0,0);
   mainFit1039->SetParameter(1,0.7646455);
   mainFit1039->SetParError(1,0.01425448);
   mainFit1039->SetParLimits(1,0,0);
   mainFit1039->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1039);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  1.1");
   pt_LaTex = pt->AddText("0.765#pm0.0143");
   pt_LaTex = pt->AddText("#minus0.237#pm0.455");
   pt_LaTex = pt->AddText(" 0.31#pm0.593");
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
   TLine *line = new TLine(-60,0,0.310292,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.310292,-46.98664,0.310292,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1040 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1040->SetFillColor(19);
   mainFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1040->SetLineColor(ci);
   mainFit1040->SetLineWidth(2);
   mainFit1040->SetChisquare(3.308545);
   mainFit1040->SetNDF(3);
   mainFit1040->GetXaxis()->SetLabelFont(42);
   mainFit1040->GetXaxis()->SetTitleOffset(1);
   mainFit1040->GetXaxis()->SetTitleFont(42);
   mainFit1040->GetYaxis()->SetLabelFont(42);
   mainFit1040->GetYaxis()->SetTitleFont(42);
   mainFit1040->SetParameter(0,-0.2372634);
   mainFit1040->SetParError(0,0.4553348);
   mainFit1040->SetParLimits(0,0,0);
   mainFit1040->SetParameter(1,0.7646455);
   mainFit1040->SetParError(1,0.01425448);
   mainFit1040->SetParLimits(1,0,0);
   mainFit1040->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
