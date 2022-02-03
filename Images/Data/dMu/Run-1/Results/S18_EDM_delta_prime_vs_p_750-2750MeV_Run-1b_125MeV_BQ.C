void S18_EDM_delta_prime_vs_p_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:59:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.0628,-1.365771,3143.649,2.384229);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1015[16] = {
   815.6606,
   938.5876,
   1062.746,
   1187.917,
   1312.682,
   1435.616,
   1562.048,
   1684.958,
   1810.531,
   1934.89,
   2060.321,
   2184.823,
   2308.917,
   2433.332,
   2560.037,
   2678.052};
   Double_t _fy1015[16] = {
   1.317672,
   1.004859,
   0.9468668,
   0.8349833,
   0.1243847,
   0.9216294,
   0.3727005,
   0.2069845,
   0.1911405,
   0.2341443,
   1.251009,
   0.06670446,
   0.8396566,
   0.6115989,
   0.5220562,
   -0.6443749};
   Double_t _fex1015[16] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[16] = {
   0.6366797,
   0.5375177,
   0.4812336,
   0.4401917,
   0.4195711,
   0.4016346,
   0.3998158,
   0.3882248,
   0.4004521,
   0.4021529,
   0.4164926,
   0.4134386,
   0.4225553,
   0.444249,
   0.4501202,
   0.4697815};
   TGraphErrors *gre = new TGraphErrors(16,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","S18",100,629.4215,2864.291);
   Graph_Graph1015->SetMinimum(-0.9907712);
   Graph_Graph1015->SetMaximum(2.009229);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1015->GetXaxis()->CenterTitle(true);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1015->GetYaxis()->CenterTitle(true);
   Graph_Graph1015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *pol01016 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01016->SetFillColor(19);
   pol01016->SetFillStyle(0);
   pol01016->SetLineColor(2);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(18.56756);
   pol01016->SetNDF(15);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,0.5092288);
   pol01016->SetParError(0,0.108885);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.51
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
