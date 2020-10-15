void FieldFitCheck_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:33:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.25319,45,54.07387);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1155[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1155[4] = {
   -20.81071,
   -1.137789,
   16.9552,
   37.63139};
   Double_t Graph0_fex1155[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1155[4] = {
   1.221299,
   1.221299,
   1.221299,
   1.221299};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1155,Graph0_fy1155,Graph0_fex1155,Graph0_fey1155);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01155 = new TH1F("Graph_Graph01155","Sub-runs 325",100,-36,36);
   Graph_Graph01155->SetMinimum(-28.12048);
   Graph_Graph01155->SetMaximum(44.94116);
   Graph_Graph01155->SetDirectory(0);
   Graph_Graph01155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01155->SetLineColor(ci);
   Graph_Graph01155->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01155->GetXaxis()->CenterTitle(true);
   Graph_Graph01155->GetXaxis()->SetLabelFont(42);
   Graph_Graph01155->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01155->GetXaxis()->SetTitleFont(42);
   Graph_Graph01155->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01155->GetYaxis()->CenterTitle(true);
   Graph_Graph01155->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01155->GetYaxis()->SetLabelFont(42);
   Graph_Graph01155->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01155->GetYaxis()->SetTitleFont(42);
   Graph_Graph01155->GetZaxis()->SetLabelFont(42);
   Graph_Graph01155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01155);
   
   
   TF1 *checkFit1156 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1156->SetFillColor(19);
   checkFit1156->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1156->SetLineColor(ci);
   checkFit1156->SetLineWidth(2);
   checkFit1156->SetChisquare(0.7496938);
   checkFit1156->SetNDF(2);
   checkFit1156->GetXaxis()->SetLabelFont(42);
   checkFit1156->GetXaxis()->SetTitleOffset(1);
   checkFit1156->GetXaxis()->SetTitleFont(42);
   checkFit1156->GetYaxis()->SetLabelFont(42);
   checkFit1156->GetYaxis()->SetTitleFont(42);
   checkFit1156->SetParameter(0,8.159523);
   checkFit1156->SetParError(0,0.6106494);
   checkFit1156->SetParLimits(0,0,0);
   checkFit1156->SetParameter(1,0.9670965);
   checkFit1156->SetParError(1,0.02730907);
   checkFit1156->SetParLimits(1,0,0);
   checkFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1156);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.375");
   pt_LaTex = pt->AddText("0.967#pm0.0273");
   pt_LaTex = pt->AddText(" 8.16#pm0.611");
   pt_LaTex = pt->AddText("#minus8.44#pm0.675");
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
   TLine *line = new TLine(-36,0,-8.437134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.437134,-28.12048,-8.437134,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1157 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1157->SetFillColor(19);
   checkFit1157->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1157->SetLineColor(ci);
   checkFit1157->SetLineWidth(2);
   checkFit1157->SetChisquare(0.7496938);
   checkFit1157->SetNDF(2);
   checkFit1157->GetXaxis()->SetLabelFont(42);
   checkFit1157->GetXaxis()->SetTitleOffset(1);
   checkFit1157->GetXaxis()->SetTitleFont(42);
   checkFit1157->GetYaxis()->SetLabelFont(42);
   checkFit1157->GetYaxis()->SetTitleFont(42);
   checkFit1157->SetParameter(0,8.159523);
   checkFit1157->SetParError(0,0.6106494);
   checkFit1157->SetParLimits(0,0,0);
   checkFit1157->SetParameter(1,0.9670965);
   checkFit1157->SetParError(1,0.02730907);
   checkFit1157->SetParLimits(1,0,0);
   checkFit1157->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
