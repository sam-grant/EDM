void FieldFitCheck_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-69.25662,75,88.96033);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1051[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1051[11] = {
   -40.93997,
   -33.44845,
   -25.03356,
   -15.12881,
   -1.708497,
   10.47265,
   18.52796,
   26.2336,
   40.89092,
   47.83091,
   60.64368};
   Double_t Graph0_fex1051[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1051[11] = {
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156,
   1.947156};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01051 = new TH1F("Graph_Graph01051","Sub-runs 50",100,-60,60);
   Graph_Graph01051->SetMinimum(-53.43493);
   Graph_Graph01051->SetMaximum(73.13863);
   Graph_Graph01051->SetDirectory(0);
   Graph_Graph01051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01051->SetLineColor(ci);
   Graph_Graph01051->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01051->GetXaxis()->CenterTitle(true);
   Graph_Graph01051->GetXaxis()->SetLabelFont(42);
   Graph_Graph01051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetXaxis()->SetTitleFont(42);
   Graph_Graph01051->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01051->GetYaxis()->CenterTitle(true);
   Graph_Graph01051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01051->GetYaxis()->SetLabelFont(42);
   Graph_Graph01051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01051->GetYaxis()->SetTitleFont(42);
   Graph_Graph01051->GetZaxis()->SetLabelFont(42);
   Graph_Graph01051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01051);
   
   
   TF1 *checkFit1052 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1052->SetFillColor(19);
   checkFit1052->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1052->SetLineColor(ci);
   checkFit1052->SetLineWidth(2);
   checkFit1052->SetChisquare(9.708341);
   checkFit1052->SetNDF(9);
   checkFit1052->GetXaxis()->SetLabelFont(42);
   checkFit1052->GetXaxis()->SetTitleOffset(1);
   checkFit1052->GetXaxis()->SetTitleFont(42);
   checkFit1052->GetYaxis()->SetLabelFont(42);
   checkFit1052->GetYaxis()->SetTitleFont(42);
   checkFit1052->SetParameter(0,8.030948);
   checkFit1052->SetParError(0,0.5870897);
   checkFit1052->SetParLimits(0,0,0);
   checkFit1052->SetParameter(1,1.0307);
   checkFit1052->SetParError(1,0.01856541);
   checkFit1052->SetParLimits(1,0,0);
   checkFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1052);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.08");
   pt_LaTex = pt->AddText(" 1.03#pm0.0186");
   pt_LaTex = pt->AddText(" 8.03#pm0.587");
   pt_LaTex = pt->AddText("#minus7.79#pm0.587");
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
   TLine *line = new TLine(-60,0,-7.791738,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.791738,-53.43493,-7.791738,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1053 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1053->SetFillColor(19);
   checkFit1053->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1053->SetLineColor(ci);
   checkFit1053->SetLineWidth(2);
   checkFit1053->SetChisquare(9.708341);
   checkFit1053->SetNDF(9);
   checkFit1053->GetXaxis()->SetLabelFont(42);
   checkFit1053->GetXaxis()->SetTitleOffset(1);
   checkFit1053->GetXaxis()->SetTitleFont(42);
   checkFit1053->GetYaxis()->SetLabelFont(42);
   checkFit1053->GetYaxis()->SetTitleFont(42);
   checkFit1053->SetParameter(0,8.030948);
   checkFit1053->SetParError(0,0.5870897);
   checkFit1053->SetParLimits(0,0,0);
   checkFit1053->SetParameter(1,1.0307);
   checkFit1053->SetParError(1,0.01856541);
   checkFit1053->SetParLimits(1,0,0);
   checkFit1053->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
