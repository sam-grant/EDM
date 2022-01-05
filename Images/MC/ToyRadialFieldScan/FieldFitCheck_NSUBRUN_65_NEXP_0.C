void FieldFitCheck_NSUBRUN_65_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:10:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.29304,45,55.27498);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[2] = {
   30,
   -30};
   Double_t Graph0_fy1007[2] = {
   38.1565,
   -22.17456};
   Double_t Graph0_fex1007[2] = {
   0,
   0};
   Double_t Graph0_fey1007[2] = {
   1.357144,
   1.357144};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","",100,-36,36);
   Graph_Graph01007->SetMinimum(-29.83623);
   Graph_Graph01007->SetMaximum(45.81818);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   
   TF1 *checkFit1008 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1008->SetFillColor(19);
   checkFit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1008->SetLineColor(ci);
   checkFit1008->SetLineWidth(2);
   checkFit1008->SetChisquare(1.698982e-16);
   checkFit1008->SetNDF(0);
   checkFit1008->GetXaxis()->SetLabelFont(42);
   checkFit1008->GetXaxis()->SetTitleOffset(1);
   checkFit1008->GetXaxis()->SetTitleFont(42);
   checkFit1008->GetYaxis()->SetLabelFont(42);
   checkFit1008->GetYaxis()->SetTitleFont(42);
   checkFit1008->SetParameter(0,7.990973);
   checkFit1008->SetParError(0,0.9596458);
   checkFit1008->SetParLimits(0,0,0);
   checkFit1008->SetParameter(1,1.005518);
   checkFit1008->SetParError(1,0.03198819);
   checkFit1008->SetParLimits(1,0,0);
   checkFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1008);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1
#pm0.03
");
   pt_LaTex = pt->AddText("8
#pm1
");
   pt_LaTex = pt->AddText("8
#pm1
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
   TLine *line = new TLine(-36,0,-7.947124,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.947124,-29.83623,-7.947124,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1009 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1009->SetFillColor(19);
   checkFit1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1009->SetLineColor(ci);
   checkFit1009->SetLineWidth(2);
   checkFit1009->SetChisquare(1.698982e-16);
   checkFit1009->SetNDF(0);
   checkFit1009->GetXaxis()->SetLabelFont(42);
   checkFit1009->GetXaxis()->SetTitleOffset(1);
   checkFit1009->GetXaxis()->SetTitleFont(42);
   checkFit1009->GetYaxis()->SetLabelFont(42);
   checkFit1009->GetYaxis()->SetTitleFont(42);
   checkFit1009->SetParameter(0,7.990973);
   checkFit1009->SetParError(0,0.9596458);
   checkFit1009->SetParLimits(0,0,0);
   checkFit1009->SetParameter(1,1.005518);
   checkFit1009->SetParError(1,0.03198819);
   checkFit1009->SetParLimits(1,0,0);
   checkFit1009->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
