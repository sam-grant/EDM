void FieldFitCheck_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.49272,75,84.36608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1159[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1159[6] = {
   -41.67133,
   -22.07357,
   -2.300734,
   18.705,
   38.40685,
   58.54469};
   Double_t Graph0_fex1159[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1159[6] = {
   0.5115894,
   0.5115894,
   0.5115894,
   0.5115894,
   0.5115894,
   0.5115894};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1159,Graph0_fy1159,Graph0_fex1159,Graph0_fey1159);
   gre->SetName("Graph0");
   gre->SetTitle("250 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01159 = new TH1F("Graph_Graph01159","250 sub-runs",100,-60,60);
   Graph_Graph01159->SetMinimum(-52.30684);
   Graph_Graph01159->SetMaximum(69.1802);
   Graph_Graph01159->SetDirectory(0);
   Graph_Graph01159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01159->SetLineColor(ci);
   Graph_Graph01159->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01159->GetXaxis()->CenterTitle(true);
   Graph_Graph01159->GetXaxis()->SetLabelFont(42);
   Graph_Graph01159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01159->GetXaxis()->SetTitleFont(42);
   Graph_Graph01159->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01159->GetYaxis()->CenterTitle(true);
   Graph_Graph01159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01159->GetYaxis()->SetLabelFont(42);
   Graph_Graph01159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01159->GetYaxis()->SetTitleFont(42);
   Graph_Graph01159->GetZaxis()->SetLabelFont(42);
   Graph_Graph01159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01159);
   
   
   TF1 *checkFit1160 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1160->SetFillColor(19);
   checkFit1160->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1160->SetLineColor(ci);
   checkFit1160->SetLineWidth(2);
   checkFit1160->SetChisquare(2.112525);
   checkFit1160->SetNDF(4);
   checkFit1160->GetXaxis()->SetLabelFont(42);
   checkFit1160->GetXaxis()->SetTitleOffset(1);
   checkFit1160->GetXaxis()->SetTitleFont(42);
   checkFit1160->GetYaxis()->SetLabelFont(42);
   checkFit1160->GetYaxis()->SetTitleFont(42);
   checkFit1160->SetParameter(0,8.268487);
   checkFit1160->SetParError(0,0.2088556);
   checkFit1160->SetParLimits(0,0,0);
   checkFit1160->SetParameter(1,1.005039);
   checkFit1160->SetParError(1,0.006114663);
   checkFit1160->SetParLimits(1,0,0);
   checkFit1160->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1160);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.528");
   pt_LaTex = pt->AddText(" 1.01#pm0.00611");
   pt_LaTex = pt->AddText(" 8.27#pm0.209");
   pt_LaTex = pt->AddText(" 8.23#pm0.214");
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
   TLine *line = new TLine(-60,0,-8.227033,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.227033,-52.30684,-8.227033,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1161 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1161->SetFillColor(19);
   checkFit1161->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1161->SetLineColor(ci);
   checkFit1161->SetLineWidth(2);
   checkFit1161->SetChisquare(2.112525);
   checkFit1161->SetNDF(4);
   checkFit1161->GetXaxis()->SetLabelFont(42);
   checkFit1161->GetXaxis()->SetTitleOffset(1);
   checkFit1161->GetXaxis()->SetTitleFont(42);
   checkFit1161->GetYaxis()->SetLabelFont(42);
   checkFit1161->GetYaxis()->SetTitleFont(42);
   checkFit1161->SetParameter(0,8.268487);
   checkFit1161->SetParError(0,0.2088556);
   checkFit1161->SetParLimits(0,0,0);
   checkFit1161->SetParameter(1,1.005039);
   checkFit1161->SetParError(1,0.006114663);
   checkFit1161->SetParLimits(1,0,0);
   checkFit1161->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("250 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
