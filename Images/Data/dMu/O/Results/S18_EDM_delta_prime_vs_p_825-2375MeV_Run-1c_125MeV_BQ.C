void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.662019,2655.75,2.366237);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1123[12] = {
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312};
   Double_t _fy1123[12] = {
   0.3758111,
   0.1172174,
   -0.2581042,
   0.06383668,
   -0.146337,
   -0.3970562,
   -0.2129739,
   -0.3756003,
   -0.3489625,
   0.6311376,
   -0.5321154,
   0.4163483};
   Double_t _fex1123[12] = {
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
   0,
   0};
   Double_t _fey1123[12] = {
   0.5773094,
   0.4699443,
   0.4023125,
   0.3693257,
   0.3487261,
   0.3531465,
   0.3531171,
   0.3872594,
   0.4237316,
   0.493706,
   0.5816621,
   0.7535486};
   TGraphErrors *gre = new TGraphErrors(12,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","S18_",100,799.5,2449.5);
   Graph_Graph1123->SetMinimum(-1.259193);
   Graph_Graph1123->SetMaximum(1.963412);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1123->GetXaxis()->CenterTitle(true);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1123->GetYaxis()->CenterTitle(true);
   Graph_Graph1123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol01124 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01124->SetFillColor(19);
   pol01124->SetFillStyle(0);
   pol01124->SetLineColor(2);
   pol01124->SetLineWidth(2);
   pol01124->SetChisquare(6.098121);
   pol01124->SetNDF(11);
   pol01124->GetXaxis()->SetLabelFont(42);
   pol01124->GetXaxis()->SetTitleOffset(1);
   pol01124->GetXaxis()->SetTitleFont(42);
   pol01124->GetYaxis()->SetLabelFont(42);
   pol01124->GetYaxis()->SetTitleFont(42);
   pol01124->SetParameter(0,-0.124505);
   pol01124->SetParError(0,0.1227606);
   pol01124->SetParLimits(0,0,0);
   pol01124->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01124);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.12
#pm0.1
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
