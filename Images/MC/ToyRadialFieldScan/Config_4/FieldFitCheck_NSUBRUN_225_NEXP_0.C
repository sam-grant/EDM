void FieldFitCheck_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.1217,75,83.16829);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1233[11] = {
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
   Double_t Graph0_fy1233[11] = {
   -41.98393,
   -31.18105,
   -23.98685,
   -12.5124,
   -1.818355,
   8.175782,
   17.35414,
   28.73597,
   38.62287,
   47.0068,
   57.03052};
   Double_t Graph0_fex1233[11] = {
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
   Double_t Graph0_fey1233[11] = {
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675,
   0.9227675};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1233,Graph0_fy1233,Graph0_fex1233,Graph0_fey1233);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01233 = new TH1F("Graph_Graph01233","Sub-runs 225",100,-60,60);
   Graph_Graph01233->SetMinimum(-52.9927);
   Graph_Graph01233->SetMaximum(68.03929);
   Graph_Graph01233->SetDirectory(0);
   Graph_Graph01233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01233->SetLineColor(ci);
   Graph_Graph01233->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01233->GetXaxis()->CenterTitle(true);
   Graph_Graph01233->GetXaxis()->SetLabelFont(42);
   Graph_Graph01233->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01233->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01233->GetXaxis()->SetTitleFont(42);
   Graph_Graph01233->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01233->GetYaxis()->CenterTitle(true);
   Graph_Graph01233->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01233->GetYaxis()->SetLabelFont(42);
   Graph_Graph01233->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01233->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01233->GetYaxis()->SetTitleFont(42);
   Graph_Graph01233->GetZaxis()->SetLabelFont(42);
   Graph_Graph01233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01233);
   
   
   TF1 *checkFit1234 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1234->SetFillColor(19);
   checkFit1234->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1234->SetLineColor(ci);
   checkFit1234->SetLineWidth(2);
   checkFit1234->SetChisquare(8.876895);
   checkFit1234->SetNDF(9);
   checkFit1234->GetXaxis()->SetLabelFont(42);
   checkFit1234->GetXaxis()->SetTitleOffset(1);
   checkFit1234->GetXaxis()->SetTitleFont(42);
   checkFit1234->GetYaxis()->SetLabelFont(42);
   checkFit1234->GetYaxis()->SetTitleFont(42);
   checkFit1234->SetParameter(0,7.76759);
   checkFit1234->SetParError(0,0.2782249);
   checkFit1234->SetParLimits(0,0,0);
   checkFit1234->SetParameter(1,0.9975655);
   checkFit1234->SetParError(1,0.008798243);
   checkFit1234->SetParLimits(1,0,0);
   checkFit1234->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1234);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.986");
   pt_LaTex = pt->AddText("0.998#pm0.0088");
   pt_LaTex = pt->AddText(" 7.77#pm0.278");
   pt_LaTex = pt->AddText("#minus7.79#pm0.287");
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
   TLine *line = new TLine(-60,0,-7.786547,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.786547,-52.9927,-7.786547,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1235 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1235->SetFillColor(19);
   checkFit1235->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1235->SetLineColor(ci);
   checkFit1235->SetLineWidth(2);
   checkFit1235->SetChisquare(8.876895);
   checkFit1235->SetNDF(9);
   checkFit1235->GetXaxis()->SetLabelFont(42);
   checkFit1235->GetXaxis()->SetTitleOffset(1);
   checkFit1235->GetXaxis()->SetTitleFont(42);
   checkFit1235->GetYaxis()->SetLabelFont(42);
   checkFit1235->GetYaxis()->SetTitleFont(42);
   checkFit1235->SetParameter(0,7.76759);
   checkFit1235->SetParError(0,0.2782249);
   checkFit1235->SetParLimits(0,0,0);
   checkFit1235->SetParameter(1,0.9975655);
   checkFit1235->SetParError(1,0.008798243);
   checkFit1235->SetParLimits(1,0,0);
   checkFit1235->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 225");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
