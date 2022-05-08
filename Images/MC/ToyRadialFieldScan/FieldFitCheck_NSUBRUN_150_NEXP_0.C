void FieldFitCheck_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-43.10864,75,79.64194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1095[6] = {
   0,
   -21.9461,
   -0.8958472,
   17.70004,
   38.71921,
   58.4794};
   Double_t Graph0_fex1095[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1095[6] = {
   0,
   0.7041126,
   0.7041126,
   0.7041126,
   0.7041126,
   0.7041126};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","",100,-60,60);
   Graph_Graph01095->SetMinimum(-30.83358);
   Graph_Graph01095->SetMaximum(67.36688);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
   
   TF1 *checkFit1096 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1096->SetFillColor(19);
   checkFit1096->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1096->SetLineColor(ci);
   checkFit1096->SetLineWidth(2);
   checkFit1096->SetChisquare(2.4031);
   checkFit1096->SetNDF(3);
   checkFit1096->GetXaxis()->SetLabelFont(42);
   checkFit1096->GetXaxis()->SetTitleOffset(1);
   checkFit1096->GetXaxis()->SetTitleFont(42);
   checkFit1096->GetYaxis()->SetLabelFont(42);
   checkFit1096->GetYaxis()->SetTitleFont(42);
   checkFit1096->SetParameter(0,8.388037);
   checkFit1096->SetParError(0,0.33399);
   checkFit1096->SetParLimits(0,0,0);
   checkFit1096->SetParameter(1,1.00233);
   checkFit1096->SetParError(1,0.011133);
   checkFit1096->SetParLimits(1,0,0);
   checkFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1096);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.801");
   pt_LaTex = pt->AddText("1
#pm0.01
");
   pt_LaTex = pt->AddText("8.39
#pm0.3
");
   pt_LaTex = pt->AddText("8.4
#pm0.4
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
   TLine *line = new TLine(-60,0,-8.368536,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.368536,-30.83358,-8.368536,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1097 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1097->SetFillColor(19);
   checkFit1097->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1097->SetLineColor(ci);
   checkFit1097->SetLineWidth(2);
   checkFit1097->SetChisquare(2.4031);
   checkFit1097->SetNDF(3);
   checkFit1097->GetXaxis()->SetLabelFont(42);
   checkFit1097->GetXaxis()->SetTitleOffset(1);
   checkFit1097->GetXaxis()->SetTitleFont(42);
   checkFit1097->GetYaxis()->SetLabelFont(42);
   checkFit1097->GetYaxis()->SetTitleFont(42);
   checkFit1097->SetParameter(0,8.388037);
   checkFit1097->SetParError(0,0.33399);
   checkFit1097->SetParLimits(0,0,0);
   checkFit1097->SetParameter(1,1.00233);
   checkFit1097->SetParError(1,0.011133);
   checkFit1097->SetParLimits(1,0,0);
   checkFit1097->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
