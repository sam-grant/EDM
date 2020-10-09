void Result_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:24:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.202306,45,0.1592397);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1019[4] = {
   0.09164927,
   0.01707951,
   -0.06455074,
   -0.1347156};
   Double_t Graph0_fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1019[4] = {
   0.007332801,
   0.007332801,
   0.007332801,
   0.007332801};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","Sub-runs 50",100,-36,36);
   Graph_Graph01019->SetMinimum(-0.1661515);
   Graph_Graph01019->SetMaximum(0.1230851);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
   
   TF1 *fieldLineFit1020 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1020->SetFillColor(19);
   fieldLineFit1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1020->SetLineColor(ci);
   fieldLineFit1020->SetLineWidth(2);
   fieldLineFit1020->SetChisquare(0.4093585);
   fieldLineFit1020->SetNDF(2);
   fieldLineFit1020->GetXaxis()->SetLabelFont(42);
   fieldLineFit1020->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1020->GetXaxis()->SetTitleFont(42);
   fieldLineFit1020->GetYaxis()->SetLabelFont(42);
   fieldLineFit1020->GetYaxis()->SetTitleFont(42);
   fieldLineFit1020->SetParameter(0,-0.02263439);
   fieldLineFit1020->SetParError(0,0.0036664);
   fieldLineFit1020->SetParLimits(0,0,0);
   fieldLineFit1020->SetParameter(1,-0.003803624);
   fieldLineFit1020->SetParError(1,0.0001639664);
   fieldLineFit1020->SetParLimits(1,0,0);
   fieldLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1020);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.205");
   pt_LaTex = pt->AddText("#minus0.0038#pm0.000164");
   pt_LaTex = pt->AddText("-0.0226#pm0.00367");
   pt_LaTex = pt->AddText("-5.95#pm0.964");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-5.950743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-5.950743,-0.1661515,-5.950743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1021 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1021->SetFillColor(19);
   fieldLineFit1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1021->SetLineColor(ci);
   fieldLineFit1021->SetLineWidth(2);
   fieldLineFit1021->SetChisquare(0.4093585);
   fieldLineFit1021->SetNDF(2);
   fieldLineFit1021->GetXaxis()->SetLabelFont(42);
   fieldLineFit1021->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1021->GetXaxis()->SetTitleFont(42);
   fieldLineFit1021->GetYaxis()->SetLabelFont(42);
   fieldLineFit1021->GetYaxis()->SetTitleFont(42);
   fieldLineFit1021->SetParameter(0,-0.02263439);
   fieldLineFit1021->SetParError(0,0.0036664);
   fieldLineFit1021->SetParLimits(0,0,0);
   fieldLineFit1021->SetParameter(1,-0.003803624);
   fieldLineFit1021->SetParError(1,0.0001639664);
   fieldLineFit1021->SetParLimits(1,0,0);
   fieldLineFit1021->Draw("same");
   
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
