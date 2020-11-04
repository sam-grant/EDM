void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:19 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.12755,75,85.11215);
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
   -40.82539,
   -22.85123,
   -1.359938,
   18.49665,
   37.07452,
   58.80998};
   Double_t Graph0_fex1047[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1047[6] = {
   0.9288839,
   0.9288839,
   0.9288839,
   0.9288839,
   0.9288839,
   0.9288839};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","Sub-runs 75",100,-60,60);
   Graph_Graph01047->SetMinimum(-51.90358);
   Graph_Graph01047->SetMaximum(69.88818);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
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
   
   
   TF1 *checkFit1048 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1048->SetFillColor(19);
   checkFit1048->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1048->SetLineColor(ci);
   checkFit1048->SetLineWidth(2);
   checkFit1048->SetChisquare(4.524018);
   checkFit1048->SetNDF(4);
   checkFit1048->GetXaxis()->SetLabelFont(42);
   checkFit1048->GetXaxis()->SetTitleOffset(1);
   checkFit1048->GetXaxis()->SetTitleFont(42);
   checkFit1048->GetYaxis()->SetLabelFont(42);
   checkFit1048->GetYaxis()->SetTitleFont(42);
   checkFit1048->SetParameter(0,8.224099);
   checkFit1048->SetParError(0,0.3792152);
   checkFit1048->SetParLimits(0,0,0);
   checkFit1048->SetParameter(1,0.9968724);
   checkFit1048->SetParError(1,0.01110229);
   checkFit1048->SetParLimits(1,0,0);
   checkFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1048);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.13");
   pt_LaTex = pt->AddText("0.997#pm0.0111");
   pt_LaTex = pt->AddText(" 8.22#pm0.379");
   pt_LaTex = pt->AddText("#minus8.25#pm0.391");
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
   TLine *line = new TLine(-60,0,-8.249901,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.249901,-51.90358,-8.249901,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1049 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1049->SetFillColor(19);
   checkFit1049->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1049->SetLineColor(ci);
   checkFit1049->SetLineWidth(2);
   checkFit1049->SetChisquare(4.524018);
   checkFit1049->SetNDF(4);
   checkFit1049->GetXaxis()->SetLabelFont(42);
   checkFit1049->GetXaxis()->SetTitleOffset(1);
   checkFit1049->GetXaxis()->SetTitleFont(42);
   checkFit1049->GetYaxis()->SetLabelFont(42);
   checkFit1049->GetYaxis()->SetTitleFont(42);
   checkFit1049->SetParameter(0,8.224099);
   checkFit1049->SetParError(0,0.3792152);
   checkFit1049->SetParLimits(0,0,0);
   checkFit1049->SetParameter(1,0.9968724);
   checkFit1049->SetParError(1,0.01110229);
   checkFit1049->SetParLimits(1,0,0);
   checkFit1049->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 75");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
