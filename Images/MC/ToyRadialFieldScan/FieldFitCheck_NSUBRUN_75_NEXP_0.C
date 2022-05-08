void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-44.30205,75,80.78559);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1047[6] = {
   0,
   -22.45948,
   -0.8027638,
   18.56838,
   39.88113,
   58.94302};
   Double_t Graph0_fex1047[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1047[6] = {
   0,
   0.9946287,
   0.9946287,
   0.9946287,
   0.9946287,
   0.9946287};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","",100,-60,60);
   Graph_Graph01047->SetMinimum(-31.79329);
   Graph_Graph01047->SetMaximum(68.27682);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   
   TF1 *checkFit1048 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1048->SetFillColor(19);
   checkFit1048->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1048->SetLineColor(ci);
   checkFit1048->SetLineWidth(2);
   checkFit1048->SetChisquare(1.785541);
   checkFit1048->SetNDF(3);
   checkFit1048->GetXaxis()->SetLabelFont(42);
   checkFit1048->GetXaxis()->SetTitleOffset(1);
   checkFit1048->GetXaxis()->SetTitleFont(42);
   checkFit1048->GetYaxis()->SetLabelFont(42);
   checkFit1048->GetYaxis()->SetTitleFont(42);
   checkFit1048->SetParameter(0,8.65161);
   checkFit1048->SetParError(0,0.4717938);
   checkFit1048->SetParLimits(0,0,0);
   checkFit1048->SetParameter(1,1.017444);
   checkFit1048->SetParError(1,0.01572646);
   checkFit1048->SetParLimits(1,0,0);
   checkFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1048);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.595");
   pt_LaTex = pt->AddText("1.02
#pm0.02
");
   pt_LaTex = pt->AddText("8.65
#pm0.5
");
   pt_LaTex = pt->AddText("8.5
#pm0.5
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
   TLine *line = new TLine(-60,0,-8.503275,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.503275,-31.79329,-8.503275,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1049 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1049->SetFillColor(19);
   checkFit1049->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1049->SetLineColor(ci);
   checkFit1049->SetLineWidth(2);
   checkFit1049->SetChisquare(1.785541);
   checkFit1049->SetNDF(3);
   checkFit1049->GetXaxis()->SetLabelFont(42);
   checkFit1049->GetXaxis()->SetTitleOffset(1);
   checkFit1049->GetXaxis()->SetTitleFont(42);
   checkFit1049->GetYaxis()->SetLabelFont(42);
   checkFit1049->GetYaxis()->SetTitleFont(42);
   checkFit1049->SetParameter(0,8.65161);
   checkFit1049->SetParError(0,0.4717938);
   checkFit1049->SetParLimits(0,0,0);
   checkFit1049->SetParameter(1,1.017444);
   checkFit1049->SetParError(1,0.01572646);
   checkFit1049->SetParLimits(1,0,0);
   checkFit1049->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
