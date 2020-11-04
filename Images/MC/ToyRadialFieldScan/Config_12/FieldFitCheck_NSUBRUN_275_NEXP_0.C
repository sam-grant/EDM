void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.10624,75,85.01315);
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
   -41.75189,
   -15.89044,
   8.096182,
   34.45661,
   58.6588};
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
   Graph_Graph01153->SetMinimum(-52.7943);
   Graph_Graph01153->SetMaximum(69.70121);
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
   checkFit1154->SetChisquare(1.684924);
   checkFit1154->SetNDF(3);
   checkFit1154->GetXaxis()->SetLabelFont(42);
   checkFit1154->GetXaxis()->SetTitleOffset(1);
   checkFit1154->GetXaxis()->SetTitleFont(42);
   checkFit1154->GetYaxis()->SetLabelFont(42);
   checkFit1154->GetYaxis()->SetTitleFont(42);
   checkFit1154->SetParameter(0,8.713852);
   checkFit1154->SetParError(0,0.373175);
   checkFit1154->SetParLimits(0,0,0);
   checkFit1154->SetParameter(1,1.004674);
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
   TText *pt_LaTex = pt->AddText("0.562");
   pt_LaTex = pt->AddText("    1#pm0.0106");
   pt_LaTex = pt->AddText(" 8.71#pm0.373");
   pt_LaTex = pt->AddText("#minus8.67#pm0.382");
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
   TLine *line = new TLine(-60,0,-8.673315,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.673315,-52.7943,-8.673315,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1155 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1155->SetFillColor(19);
   checkFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1155->SetLineColor(ci);
   checkFit1155->SetLineWidth(2);
   checkFit1155->SetChisquare(1.684924);
   checkFit1155->SetNDF(3);
   checkFit1155->GetXaxis()->SetLabelFont(42);
   checkFit1155->GetXaxis()->SetTitleOffset(1);
   checkFit1155->GetXaxis()->SetTitleFont(42);
   checkFit1155->GetYaxis()->SetLabelFont(42);
   checkFit1155->GetYaxis()->SetTitleFont(42);
   checkFit1155->SetParameter(0,8.713852);
   checkFit1155->SetParError(0,0.373175);
   checkFit1155->SetParLimits(0,0,0);
   checkFit1155->SetParameter(1,1.004674);
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
