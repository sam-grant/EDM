void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:06 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.96215,75,83.99227);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1153[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1153[5] = {
   -40.96863,
   -16.50538,
   8.421595,
   32.48726,
   57.99876};
   Double_t Graph0_fex1153[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1153[5] = {
   0.8344447,
   0.8344447,
   0.8344447,
   0.8344447,
   0.8344447};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1153,Graph0_fy1153,Graph0_fex1153,Graph0_fey1153);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01153 = new TH1F("Graph_Graph01153","Sub-runs 275",100,-60,60);
   Graph_Graph01153->SetMinimum(-51.86671);
   Graph_Graph01153->SetMaximum(68.89683);
   Graph_Graph01153->SetDirectory(0);
   Graph_Graph01153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01153->SetLineColor(ci);
   Graph_Graph01153->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01153->GetXaxis()->CenterTitle(true);
   Graph_Graph01153->GetXaxis()->SetLabelFont(42);
   Graph_Graph01153->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01153->GetXaxis()->SetTitleFont(42);
   Graph_Graph01153->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01153->GetYaxis()->CenterTitle(true);
   Graph_Graph01153->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01153->GetYaxis()->SetLabelFont(42);
   Graph_Graph01153->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01153->GetYaxis()->SetTitleFont(42);
   Graph_Graph01153->GetZaxis()->SetLabelFont(42);
   Graph_Graph01153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01153);
   
   
   TF1 *checkFit1154 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1154->SetFillColor(19);
   checkFit1154->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1154->SetLineColor(ci);
   checkFit1154->SetLineWidth(2);
   checkFit1154->SetChisquare(0.5657047);
   checkFit1154->SetNDF(3);
   checkFit1154->GetXaxis()->SetLabelFont(42);
   checkFit1154->GetXaxis()->SetTitleOffset(1);
   checkFit1154->GetXaxis()->SetTitleFont(42);
   checkFit1154->GetYaxis()->SetLabelFont(42);
   checkFit1154->GetYaxis()->SetTitleFont(42);
   checkFit1154->SetParameter(0,8.286718);
   checkFit1154->SetParError(0,0.3731751);
   checkFit1154->SetParLimits(0,0,0);
   checkFit1154->SetParameter(1,0.9877097);
   checkFit1154->SetParError(1,0.01055498);
   checkFit1154->SetParLimits(1,0,0);
   checkFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1154);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.189");
   pt_LaTex = pt->AddText("0.988#pm0.0106");
   pt_LaTex = pt->AddText(" 8.29#pm0.373");
   pt_LaTex = pt->AddText("#minus8.39#pm0.388");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.389832,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.389832,-51.86671,-8.389832,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1155 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1155->SetFillColor(19);
   checkFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1155->SetLineColor(ci);
   checkFit1155->SetLineWidth(2);
   checkFit1155->SetChisquare(0.5657047);
   checkFit1155->SetNDF(3);
   checkFit1155->GetXaxis()->SetLabelFont(42);
   checkFit1155->GetXaxis()->SetTitleOffset(1);
   checkFit1155->GetXaxis()->SetTitleFont(42);
   checkFit1155->GetYaxis()->SetLabelFont(42);
   checkFit1155->GetYaxis()->SetTitleFont(42);
   checkFit1155->SetParameter(0,8.286718);
   checkFit1155->SetParError(0,0.3731751);
   checkFit1155->SetParLimits(0,0,0);
   checkFit1155->SetParameter(1,0.9877097);
   checkFit1155->SetParError(1,0.01055498);
   checkFit1155->SetParLimits(1,0,0);
   checkFit1155->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 275");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
